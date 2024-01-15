#include <zephyr/device.h>
#include <zephyr/dt-bindings/adc/adc.h>
#include <zephyr/kernel.h>
//adc zephyr v3.5.99
static inline int adc_channel_setup_dt(const struct adc_dt_spec *spec)
{
	if (!spec->channel_cfg_dt_node_exists) {
		return -ENOTSUP;
	}

	return adc_channel_setup(spec->dev, &spec->channel_cfg);
}
static inline int adc_read_dt(const struct adc_dt_spec *spec,
			      const struct adc_sequence *sequence)
{
	return adc_read(spec->dev, sequence);
}
static inline int adc_raw_to_millivolts_dt(const struct adc_dt_spec *spec,
					   int32_t *valp)
{
	int32_t vref_mv;
	uint8_t resolution;

	if (!spec->channel_cfg_dt_node_exists) {
		return -ENOTSUP;
	}

	if (spec->channel_cfg.reference == ADC_REF_INTERNAL) {
		vref_mv = (int32_t)adc_ref_internal(spec->dev);
	} else {
		vref_mv = spec->vref_mv;
	}

	resolution = spec->resolution;

	/*
	 * For differential channels, one bit less needs to be specified
	 * for resolution to achieve correct conversion.
	 */
	if (spec->channel_cfg.differential) {
		resolution -= 1U;
	}

	return adc_raw_to_millivolts(vref_mv, spec->channel_cfg.gain,
				     resolution, valp);
}
static inline bool adc_is_ready_dt(const struct adc_dt_spec *spec)
{
	return device_is_ready(spec->dev);
}
static inline int adc_sequence_init_dt(const struct adc_dt_spec *spec,
				       struct adc_sequence *seq)
{
	if (!spec->channel_cfg_dt_node_exists) {
		return -ENOTSUP;
	}

	seq->channels = BIT(spec->channel_id);
	seq->resolution = spec->resolution;
	seq->oversampling = spec->oversampling;

	return 0;
}