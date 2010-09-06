#ifndef APM2_RC_h
#define APM2_RC_h

#include <inttypes.h>
#include "WProgram.h"
#include "RC.h"

class APM2_RC : public RC
{
  public:
	APM2_RC();
	void read_pwm();
	void set_ch_pwm(uint8_t ch, uint16_t pwm);
	void init();
	void set_throttle(float percent);
	void trim();

	void force_out_0_1(void);
	void force_out_2_3(void);
	void force_out_6_7(void);
	
	int16_t radio_in[8];
	int16_t radio_min[8];
	int16_t radio_trim[8];
	int16_t radio_max[8];
	
	float servo_out[8];

  private:
	uint16_t _timer_out;
};

#endif


//volatile uint16_t 	raw[8] = {1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200};