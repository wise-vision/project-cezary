/*
 * Copyright (c) WiseVision 2023. All rights reserved.
 */


#include <inttypes.h>
#include <stddef.h>
#include <stdint.h>
#include <zephyr/device.h>
#include <zephyr/drivers/lora.h>
#include <errno.h>
#include <zephyr/sys/util.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/adc.h>
#include <zephyr/drivers/gpio.h>
#include "adc_zephyr_v_3_5.h"

//adc
#if !DT_NODE_EXISTS(DT_PATH(zephyr_user)) || \
	!DT_NODE_HAS_PROP(DT_PATH(zephyr_user), io_channels)
#error "No suitable devicetree overlay specified"
#endif

#define DT_SPEC_AND_COMMA(node_id, prop, idx) \
	ADC_DT_SPEC_GET_BY_IDX(node_id, idx),

/* Data of ADC io-channels specified in devicetree. */
static const struct adc_dt_spec adc_channels[] = {
	DT_FOREACH_PROP_ELEM(DT_PATH(zephyr_user), io_channels,
			     DT_SPEC_AND_COMMA)
};
//LORA
#define DEFAULT_RADIO_NODE DT_ALIAS(lora0)
BUILD_ASSERT(DT_NODE_HAS_STATUS(DEFAULT_RADIO_NODE, okay),
	     "No default LoRa radio specified in DT");

#define MAX_DATA_LEN 10

#define LOG_LEVEL CONFIG_LOG_DEFAULT_LEVEL
#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(lora_send);

int mapSoilMoisture(int value, int inMin, int inMax, int outMin, int outMax) {
    return (value - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
}

int configureRx(const struct device *const lora_dev)
{
	/*
	* Frequncy Plans
	* Europe: 863-870 Mhz
	* United States: 902-928 Mhz
	* Austraulia: 915-928 Mhz
	* China 470-510 Mhz
	* Asia/Japan 920-923 Mhz
	* Morocco 869-870 Mhz
	* India 865-867 Mhz
	* Russia 864-870 Mhz

	*/
	struct lora_modem_config config;
	config.frequency = 865100000;
	config.bandwidth = BW_125_KHZ;
	config.datarate = SF_10;
	config.preamble_len = 8;
	config.coding_rate = CR_4_5;
	config.tx_power = 14;
	config.tx = false;

	int ret = lora_config(lora_dev, &config);
	if (ret < 0) {
		LOG_ERR("LoRa config failed");
	}
	return ret;
}

// configure transmission
int configureTx(const struct device *const lora_dev)
{
	struct lora_modem_config config;
	config.frequency = 865100000;
	config.bandwidth = BW_125_KHZ;
	config.datarate = SF_10;
	config.preamble_len = 8;
	config.coding_rate = CR_4_5;
	config.tx_power = 4;
	config.tx = true;

	int ret = lora_config(lora_dev, &config);
	if (ret < 0) {
		LOG_ERR("LoRa config failed");
	}
	return ret;
}

void sendMsg(const struct device *dev, int moisture){
	int ret;
	LOG_INF("Send moisture value: %d\n", moisture);
	char data[MAX_DATA_LEN];
	char moisture_str[MAX_DATA_LEN];
	snprintf(moisture_str, sizeof(moisture_str), "%.2d", moisture);
	memset(data, 0, sizeof(data));
	strncpy(data, moisture_str, sizeof(data) - 1);
	configureTx(dev);
	ret = lora_send(dev, data, MAX_DATA_LEN);
	if (ret < 0) {
		LOG_ERR("LoRa send failed");
		return 0;
	}

	LOG_INF("Data sent!");

}
void recevMsg(const struct device *dev, uint8_t *data_recive, int16_t rssi, int8_t snr){
	int len;
	configureRx(dev);
	LOG_INF("Recive data");
	len = lora_recv(dev, data_recive, MAX_DATA_LEN, K_FOREVER, &rssi, &snr);
	if (len < 0) {
		LOG_ERR("LoRa receive failed");
		return 0;
	}

	LOG_INF("Received data: %s", data_recive);
}

void gpiosConfig(const struct device *gpio1, const struct device *gpio2){
	int ret;
	ret = gpio_pin_configure(gpio1, 0, GPIO_OUTPUT_INACTIVE);//green
	if (ret != 0) {
		return;
	}
		ret = gpio_pin_configure(gpio2, 10, GPIO_OUTPUT_INACTIVE);//green
	if (ret != 0) {
		return;
	}

	if(!device_is_ready(gpio1)){
		return;
	}
	if(!device_is_ready(gpio2)){
		return;
	}


}

void adcConfig(){
	int err;
	for (size_t i = 0U; i < ARRAY_SIZE(adc_channels); i++) {
		if (!adc_is_ready_dt(&adc_channels[i])) {
			LOG_INF("ADC controller device %s not ready\n", adc_channels[i].dev->name);
			return 0;
		}

		err = adc_channel_setup_dt(&adc_channels[i]);
		if (err < 0) {
			LOG_INF("Could not setup channel #%d (%d)\n", i, err);
			return 0;
		}
	}
}
#define ValueDry 1950
#define ValueWet 1220
int adcVal(){
	uint16_t buf;
	struct adc_sequence sequence = {
		.buffer = &buf,
		.buffer_size = sizeof(buf),
	};
	int err;
	int moisture;
	for (size_t i = 0U; i < ARRAY_SIZE(adc_channels); i++) {
		int32_t val_mv;
		(void)adc_sequence_init_dt(&adc_channels[i], &sequence);
		err = adc_read_dt(&adc_channels[i], &sequence);
		if (err < 0) {
			
			continue;
		}
		if (adc_channels[i].channel_cfg.differential) {
			val_mv = (int32_t)((int16_t)buf);
		} else {
			val_mv = (int32_t)buf;
		}
		err = adc_raw_to_millivolts_dt(&adc_channels[i],&val_mv);
		int val_int = (int)val_mv;
		moisture = mapSoilMoisture(val_int, ValueDry, ValueWet, 0, 100);

	}
	return moisture;
}

void setLeds(uint8_t *data_recive, const struct device *gpio1, const struct device *gpio2){
	int ret=0;
	int SetLed = atoi(data_recive);
	if (SetLed == 1) {
		ret = gpio_pin_set_raw(gpio2, 10, 0);
		ret = gpio_pin_set_raw(gpio1, 0, 1);	
			
	} else {
		ret = gpio_pin_configure(gpio1, 0,GPIO_OUTPUT_ACTIVE); //red
		if (ret != 0) {
			return;
		}
		ret = gpio_pin_set_raw(gpio1, 0, 0);
		ret = gpio_pin_set_raw(gpio2, 10, 1);
			
	}
}
static const struct device *gpio_ct_dev = DEVICE_DT_GET(DT_NODELABEL(gpioa));
static const struct device *gpio_ct_dev_2 = DEVICE_DT_GET(DT_NODELABEL(gpiob));


int main(void)
{	
	const struct device *lora_dev = DEVICE_DT_GET(DEFAULT_RADIO_NODE);
	int16_t rssi;
	int8_t snr;
	uint8_t data_recive[MAX_DATA_LEN] = {0};

	if (!device_is_ready(lora_dev)) {
		LOG_ERR("%s Device not ready", lora_dev->name);
		return 0;
	}

	gpiosConfig(gpio_ct_dev,  gpio_ct_dev_2);
	adcConfig();

	while (1) {

		sendMsg(lora_dev, adcVal());
		recevMsg(lora_dev,data_recive, rssi, snr);
		setLeds(data_recive, gpio_ct_dev,  gpio_ct_dev_2);
		
		k_sleep(K_MSEC(1000));
	}
	return 0;
}
