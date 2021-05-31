/* **************************************************************************
 * SYSTEM.h
 * *********************************************************************** */

#ifndef SYSTEM_H_
#define SYSTEM_H_

#include "ANALOG.h"
#include "BUZZER.h"
#include "CAN.h"
#include "I2CS.h"
#include "LED.h"
#include "LEDD.h"
#include "SERIE.h"
#include "SWITCH.h"

uint32_t SYSTEM_Ini(uint32_t prmi);

#define SYSTEM_ID_TIMER1	(1)
#define SYSTEM_ID_TIMER2	(2)

uint32_t SYSTEM_GetTiempoON(void);
uint32_t SISTEM_SetTimer(uint32_t timer, uint32_t time);
uint32_t SISTEM_GetTimer(uint32_t timer);

#endif /* SYSTEM_H_ */
