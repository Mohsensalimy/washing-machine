#include "stm32f3xx_hal.h"

//define bit combinations for each number on the 7 seg display

#define NUM0 GPIOD->ODR &= ~(uint16_t) 0x0000;
#define NUM1 GPIOD->ODR &= ~(uint16_t) 0x0100;
#define NUM2 GPIOD->ODR &= ~(uint16_t) 0x0400;
#define NUM3 GPIOD->ODR &= ~(uint16_t) 0x0500;
#define NUM4 GPIOD->ODR &= ~(uint16_t) 0x0800;
#define NUM5 GPIOD->ODR &= ~(uint16_t) 0x0900;
#define NUM6 GPIOD->ODR &= ~(uint16_t) 0x0C00;
#define NUM7 GPIOD->ODR &= ~(uint16_t) 0x0D00;
#define NUM8 GPIOD->ODR &= ~(uint16_t) 0x2000;
#define NUM9 GPIOD->ODR &= ~(uint16_t) 0x2100;
#define C GPIOD->ODR &= ~(uint16_t) 0x2400;
#define BC GPIOD->ODR &= ~(uint16_t) 0x2500;
#define U GPIOD->ODR &= ~(uint16_t) 0x2800;
#define UC GPIOD->ODR &= ~(uint16_t) 0x2900;
#define T GPIOD->ODR &= ~(uint16_t) 0x2C00;
#define RESET GPIOD->ODR &= ~(uint16_t) 0x2D00;
