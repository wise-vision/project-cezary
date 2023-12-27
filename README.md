# Soil moisture system using grove capicty moisture sensor, Wio E5 dev board and Wio E5 mini board
## Introduction
Soil moisture system includes:
* Reading soil mositure level via ADC on mini board.
* Sending data about mositure level via Lora to dev board.
* Dev board recive this data and send order to mini board about, what color rgb led, should lights.
## Technologies
Project is created with:
* Zephyr: 3.5.0
* West: 1.2.0
## Preparation
1. It is necessary to have Zephyr already installed to build or flash application.                                                          
## E5 dev board setup             
To build versions for the e5 dev board, you need an unlocked board(this shows how to unlock board https://wisevision.tech/docs/LoRa/LoRa-e5-dev-board-unprotect-memory), connected via UART and st-link.
1. You need to copy Source code from github into zephyrpoject directory:
`$ git clone https://github.com/wise-vision/project-cezary.git`
2. You need to set the path to the code file:
`$ cd /zephyrpoject/project-cezary/boards/e5_dev_board`
3. Build source code:
`$ west build -b lora_e5_dev_board`
4. Upload your build to board:
`$ west flash`
## E5 mini board setup
To build versions for the e5 mini board, you need an unlocked board(this shows how to unlock board https://wisevision.tech/docs/LoRa/LoRa-e5-dev-board-unprotect-memory), connected via UART and st-link.
1. You need to copy Source code from github into zephyrpoject directory:
`$ git clone https://github.com/wise-vision/project-cezary.git`
2. You need to set the path to the code file:
`$ cd /zephyrpoject/project-cezary/boards/e5_mini`
3. Build source code:
`$ west build -b lora_e5_dev_board`
4. Upload your build to board:
`$ west flash`
## Code of E5 dev board
### prj.conf
```c
CONFIG_LOG=y
CONFIG_SPI=y
CONFIG_GPIO=y
CONFIG_LORA=y
CONFIG_CBPRINTF_FP_SUPPORT=y
```
These configurations help customize the Zephyr OS for specific hardware and functionality requirements.
### src/main.c
```c
int configureRx(const struct device *const lora_dev)
{
	struct lora_modem_config config;
	config.frequency = 865100000;
	config.bandwidth = BW_125_KHZ;
	config.datarate = SF_10;
	config.preamble_len = 8;
	config.coding_rate = CR_4_5;
	config.iq_inverted = false;
	config.public_network = false;
	config.tx_power = 14;
	config.tx = false;

	int ret = lora_config(lora_dev, &config);
	if (ret < 0) {
		LOG_ERR("LoRa config failed");
	}
	return ret;
}
```
This function is for configuarting reception. Lora newtork has few things to confing, but we have only to choose the frequnecy. Frequnecy is diffrent for diffrent regions.
Freuqency plans:
* Europe: 863-870 Mhz
* United States: 902-928 Mhz
* Austraulia: 915-928 Mhz
* China 470-510 Mhz
* Asia/Japan 920-923 Mhz
* Morocco 869-870 Mhz
* India 865-867 Mhz
* Russia 864-870 Mhz

```c
int configureTx(const struct device *const lora_dev)
{
	struct lora_modem_config config;
	config.frequency = 865100000;
	config.bandwidth = BW_125_KHZ;
	config.datarate = SF_10;
	config.preamble_len = 8;
	config.coding_rate = CR_4_5;
	config.iq_inverted = false;
	config.public_network = false;
	config.tx_power = 4;
	config.tx = true;

	int ret = lora_config(lora_dev, &config);
	if (ret < 0) {
		LOG_ERR("LoRa config failed");
	}
	return ret;
}
```
This function is for configuarting transmission. Like in previous function we have to choose to correct frequnecy.
```c
void recev_msg(const struct device *dev, uint8_t *data, int16_t rssi, int8_t snr){
	int len;
	configureRx(dev);
	LOG_INF("Recive data");
	len = lora_recv(dev, data, MAX_DATA_LEN, K_FOREVER, &rssi, &snr);
	if (len < 0) {
		LOG_ERR("LoRa receive failed");
		return 0;
	}

	LOG_INF("Received data: %s (RSSI:%ddBm, SNR:%ddBm)", data, rssi, snr);
}
```
This function reciving data from min board and shows info about moisture in `LOG_INF`
```c
void send_msg(const struct device *dev, uint8_t *data, int16_t rssi, int8_t snr){
	char data_send[MAX_DATA_LEN] = {0};
	int ret;
	LOG_INF("Sending data");
	int converted_value = atoi(data);
	if (converted_value<30){
	data_send[0]='1';
	}else{
	data_send[0]='0';
	}
	configureTx(dev);
	ret=lora_send(dev,data_send,1);
	if (ret < 0) {
		LOG_ERR("LoRa send failed");
	}else{
		LOG_INF("Data send:%s",data_send);
	}

}
```
This function send data 0 if the soil moisture is accurate and 1 if our plant needs water. The correct level of moisture is set for under 30 %. It could be change for your purpose.
```c
int main(void)
{
	const struct device *const lora_dev = DEVICE_DT_GET(DEFAULT_RADIO_NODE);
	uint8_t data[MAX_DATA_LEN] = {0};
	int16_t rssi;
	int8_t snr;

	if (!device_is_ready(lora_dev)) {
		LOG_ERR("%s Device not ready", lora_dev->name);
		return 0;
	}
	while(1){
		recev_msg(lora_dev, data, rssi, snr);
		send_msg(lora_dev, data, rssi, snr);
		k_sleep(K_MSEC(1000));
	}
	k_sleep(K_FOREVER);
	return 0;
}
```
In main function we recev and send messegs form board to bord with 1 second interval.



