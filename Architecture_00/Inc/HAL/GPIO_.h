/*
 * GPIO_.h
 *
 *  Created on: 20 may. 2021
 *      Author: j.cespedes
 */

#ifndef HAL_GPIO__H_
#define HAL_GPIO__H_

#include "CORTEXM_TYPES.h"

struct GPIO{
	uint32_t Set;
	uint32_t Get;
	uint32_t Mode;
	uint32_t Pull;
};

#define RESET_REG	11

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



#endif /* HAL_GPIO__H_ */
