/*
 * LED_.h
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */

#ifndef HAL_LED__H_
#define HAL_LED__H_

void LED_Ini();
void LED_per();
void LED_Set_On();
void LED_Set_Off();

#include "Led.h"
#include "GPIO_.h"


/* DEFINE GPIO PUPDR */
#define NO_PULL		00
#define PULL_UP		01
#define PULL_DOWN	10
#define RESERVED	11

/* DEFINE GPIO MODER */
#define INPUT		00
#define OUTPUT		01
#define ALTERNATE	10
#define ANALOG		11

#endif /* HAL_LED__H_ */
