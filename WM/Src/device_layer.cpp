/**
 ******************************************************************************
 * File Name          : device_layer.cpp
 * Description        : Source file containing functions for the device drivers
 ******************************************************************************
 **/
 
 extern "C" {  // this is needed to make C++ and C work together
  #include "gpio_setup.h"
//	#include "device_layer.h"
};
 
#include "device_layer.h"

#define CLKWISE 1
#define ANTI_CLKWISE 0
//#define d 

//==================== BUZZER_ON/OFF  =============//
void BUZZER::buzz_on() {
	washMach_BUZZER_PRT_REG |= (uint16_t) washMach_BUZZER; //function to turn the buzzer on
};

void BUZZER::buzz_off() {
	washMach_BUZZER_PRT_REG &= ~(uint16_t) washMach_BUZZER; //function to turn the buzzer off 
};

//==================== MOTOR_ON/OFF ================//
void MOTOR::motor_on() {
	washMach_MOTOR_CON_PRT_REG |= (uint16_t) washMach_MOTOR_CON; //function for turning on the motor
};

void MOTOR::motor_off() {
	washMach_MOTOR_CON_PRT_REG &= ~(uint16_t) washMach_MOTOR_CON; //function for turning off the motor
};

void MOTOR::motor_turn(int turning) {
	if (turning == CLKWISE){
	washMach_MOTOR_DIREC_PRT_REG |= (uint16_t) washMach_MOTOR_DIREC;
	}
	else{
	washMach_MOTOR_DIREC_PRT_REG &= ~(uint16_t) washMach_MOTOR_DIREC;
	}
};


//============DOOR OPEN/CLOSE===============//

void DOOR::door_open() {
 washMach_DOOR_OC_PRT_REG |= (uint16_t) washMach_DOOR_OC;
};

void DOOR::door_close() {
washMach_DOOR_OC_PRT_REG &= ~(uint16_t) washMach_DOOR_OC;
};

void BUTTONS::resetInputLatch() {
	washMach_RESET_PRT_REG |= (uint16_t) washMach_RESET; 		//resets all input latches 
};

void BUTTONS::lowResetSwitch() {
	washMach_RESET_PRT_REG &= ~(uint16_t) washMach_RESET;		//LOW reset switches 
};


//=============7_SEGMENT_DISPLAY=============//

void SEVENSEG::seven_seg_set()	{
	washMach_SEVEN_SEG_A_PRT_REG &= (uint16_t) washMach_SEVEN_SEG_A;
	washMach_SEVEN_SEG_B_PRT_REG &= (uint16_t) washMach_SEVEN_SEG_B;
	washMach_SEVEN_SEG_C_PRT_REG &= (uint16_t) washMach_SEVEN_SEG_C;
	washMach_SEVEN_SEG_D_PRT_REG &= (uint16_t) washMach_SEVEN_SEG_D;
};