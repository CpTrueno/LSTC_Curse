/*
 * SYSTEM.c
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */
// -- Drivers
#include "ANALOG_.h"
#include "BUZZ_.h"
#include "CAN_.h"
#include "I2C_.h"
#include "LED_.h"
#include "SERIE_.h"
#include "SWITCH_.h"

// -- System
#include "SYSTEM_.h"
#include "SYSTEM.h"

//#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"
#include "CORTEX_M0_.h"
#include <STDINT.H>

/* ****************************************************************************
 * DEFINICIONES Y CONSTANTES
 *************************************************************************** */
void SYSTEM_Ini(void);
void ANALOG_Ini(void);
void I2C_Ini(void);
void SERIE_Ini(void);
void LED_Ini(void);
void SWITCH_Ini(void);
void CAN_Ini(void);
void BUZZ_Ini(void);

void CLOCK_Set_Timer_1ms(uint32_t CLK, uint32_t P_DIV);

void LED_per();

#define CLK		8000000		/* 8MHz Velocidad del reloj en Hz */
#define RITHM	1000		/* Periodo de interrupción */

/* ***************************************************************************
 * VARIABLES
 ************************************************************************** */


/* ############################################################################
 * ########        SISTEMA        #############################################
 * ######################################################################### */

/* ****************************************************************************
 * INICIALIZACIONES HARDWARE
 * ************************************************************************* */

void SYSTEM_Ini(){

	// Init Ports
	*RCC_AHBENR |= 0x007E0000;  /* ENABLE ALL PORTS (COMMON) */

	// Init Drivers
	CLOCK_Set_Timer_1ms(CLK,RITHM);

	ANALOG_Ini();
	BUZZ_Ini();
	CAN_Ini();
	I2C_Ini();
	LED_Ini();
	SERIE_Ini();
	SWITCH_Ini();

}


void SysTick_Handler (){
	LED_per();
	SWITCH_per();
}


