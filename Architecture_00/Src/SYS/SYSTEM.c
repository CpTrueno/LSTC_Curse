/*
 * SYSTEM.c
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */

// -- System Drivers
#include "SYSTEM_.h"


//#include <STM32F042_VECT_.h>
#include "CORTEXM_TYPES.h"
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

static uint32_t tiempoon;

static uint32_t tiempo1;
static uint32_t tiempo2;

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


	/* --- TEMPORIZADOR DE TIEMPO ACTIVO --------------------------------- */
	++tiempoon;
	/* --- TEMPORIZADORES DE APLICACIÓN ---------------------------------- */
	if(tiempo1 != 0)
	{
		--tiempo1;
	}
	if(tiempo2 != 0)
	{
		--tiempo2;
	}
}

/* **************************************************************************
 * LEER EL TIEMPO ACTIVO
 * --------------------------------------------------------------------------
 * *********************************************************************** */

uint32_t SYSTEM_GetTiempoON()
{
    return(tiempoon);
}


/* **************************************************************************
 * LEER UN TEMPORIZADOR DE SISTEMA
 * --------------------------------------------------------------------------
 * *********************************************************************** */

uint32_t SISTEM_GetTimer(uint32_t timer)
{
    switch(timer)
    {
    case SYSTEM_ID_TIMER1:
    	return(tiempo1);
    	break;

    case SYSTEM_ID_TIMER2:
    	return(tiempo2);
    	break;

    default:
    	return(0xFFFFFFFF);
    	break;
    }
}


/* **************************************************************************
 * ESCRIBIR UN TEMPORIZADOR DE SISTEMA
 * --------------------------------------------------------------------------
 * *********************************************************************** */

uint32_t SISTEM_SetTimer(uint32_t timer, uint32_t time)
{
    switch(timer)
    {
    case SYSTEM_ID_TIMER1:
    	tiempo1 = time;
    	break;

    case SYSTEM_ID_TIMER2:
    	tiempo2 = time;
    	break;

    default:
    	time = 0xFFFFFFFF;
    	break;
    }
    return(time);
}


