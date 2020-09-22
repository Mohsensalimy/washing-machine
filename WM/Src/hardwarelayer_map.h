/**
 ******************************************************************************
 * File Name          : harwarelayer.h
 * Description        : Hardware layer definitions
 *                      
 ******************************************************************************
 **/

/* 
  washing machine outputs (ports C and D)
  ---------------------------------------
  0x0040 PC6  Buzzer		
  0x0100 PD8  7 segment display bit A
  0x0400 PD10 7 segment display bit C
  0x0800 PD11 7 segment display bit B
  0x1000 PD12 motor control	
  0x2000 PD13 7 segment display bit D
  0x4000 PD14 reset latches
  0x8000 PD15 motor direction

  washing machine inputs (port E)
  -------------------------------
  0x0100 PE8  programme select 1
  0x0200 PE9  programme select 2
  0x0400 PE10 programme select 3
  0x0800 PE11 door open/close
  0x1000 PE12 accept button
  0x2000 PE13 cancel button
  0x8000 PE15 motor speed feedback
*/
//extern "C" {  // this is needed to make C++ and C work together
//  #include "gpio_setup.h"
//}

 // define washing machine output on port c & d
 
#define washMach_BUZZER  0x0040 //PC6 
#define washMach_SEVEN_SEG_A 0x0100 //PD8 
#define washMach_SEVEN_SEG_B 0x0800 //PD11
#define washMach_SEVEN_SEG_C 0x0400 //PD10 
#define washMach_SEVEN_SEG_D 0x2000 //PD13
#define washMach_RESET 0x4000 //PD14
#define washMach_MOTOR_CON 0x1000 //PD12
#define washMach_MOTOR_DIREC 0x8000 //PD15



//define washing machine inputs on port E 

#define washMach_PROG_SEL_1 0x0100 //PE8
#define washMach_PROG_SEL_2 0x0200 //PE9
#define washMach_PROG_SEL_3	0x0400 //PE10
#define washMach_DOOR_OC 0x0800 //PE11
#define washMach_ACCEPT 0x1000 //PE12
#define washMach_CANCEL 0x2000 //PE13
#define washMach_MOTOR_SPEED_FB 0x8000 //PE15




//Mapping the GPIO Port to the Register map//

#define washMach_BUZZER_PRT_REG GPIOC->ODR //mapping BUZZER port c&d to output register


#define washMach_SEVEN_SEG_A_PRT_REG GPIOD->ODR			//mapping 7_SEG on port  c&d to output register
#define washMach_SEVEN_SEG_B_PRT_REG GPIOD->ODR 
#define washMach_SEVEN_SEG_C_PRT_REG GPIOD->ODR
#define washMach_SEVEN_SEG_D_PRT_REG GPIOD->ODR


#define washMach_MOTOR_CON_PRT_REG GPIOD->ODR	//mapping motor control on port c&d to output register

#define washMach_RESET_PRT_REG GPIOD->ODR			//mapping reset port c&d to output register

#define washMach_MOTOR_DIREC_PRT_REG GPIOD->ODR	//mapping motor direction port c&d to output register


//========Mappping the washing machine inputs on port E to input register======//

//mapping the program select buttons to input registers 
#define washMach_PROG_SEL_1_PRT_REG GPIOE->IDR 	//(rightmost)
#define washMach_PROG_SEL_2_PRT_REG GPIOE->IDR		//(middle)
#define washMach_PROG_SEL_3_PRT_REG GPIOE->IDR		//(leftmost)

#define washMach_DOOR_OC_PRT_REG GPIOE->IDR 		//mapping the door open/close to input registers 

#define washMach_ACCEPT_PRT_REG GPIOE->IDR 			//mappping the accept button to input registers 

#define washMach_CANCEL_PRT_REG GPIOE->IDR 			//mapping cancel button to input registers

#define washMach_MOTOR_SPEED_FB_PRT_REG GPIOE->IDR 		//mapping motor speed feedback to input registers 
















