/**
 ******************************************************************************
 * File Name          : device_layer.cpp
 * Description        : Source file containing functions for the device drivers
 ******************************************************************************
 **/
 
 extern "C" {  // this is needed to make C++ and C work together
  #include "gpio_setup.h"
}
 
#include "hardwarelayer_map.h"

class BUZZER {
	private:
	public: 
		void buzz_on();
		void buzz_off();
};

class MOTOR {
	private:
	public:
			void motor_on();
			void motor_off();
			void motor_turn(int);
};	

class BUTTONS {
	private:
	public:
			void resetInputLatch();
			void lowResetSwitch();		
};

class DOOR {
	private:
	public:
			void door_open();
			void door_close();
};

class SEVENSEG {
	private:
	public:
			void seven_seg_set();
};
