/*
 * CLOCK.c
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */

// -- Drivers
#include "CLOCK_.h"
#include "CLOCK.h"

// -- System
#include "SYSTEM_.h"
#include "SYSTEM.h"	//Tengo dudas de si va en esta capa - CREO que NO le TOCA

//#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"
#include "CORTEX_M0_.h"
#include <STDINT.H>

/* ****************************************************************************
 * DEFINICIONES Y CONSTANTES
 *************************************************************************** */


/* ***************************************************************************
 * VARIABLES
 ************************************************************************** */


/* ############################################################################
 * ########        SISTEMA        #############################################
 * ######################################################################### */

/* ****************************************************************************
 * INICIALIZACIONES HARDWARE
 * ************************************************************************* */

void CLOCK_Set_Timer_1ms(uint32_t CLK, uint32_t P_DIV){

    /* ---- INICIALIZACIONES: TEMPORIZADOR DE SISTEMA ---------------------- */

    *STK_RVR = (CLK/P_DIV) - 1;         /* Top value */
    *STK_RVR = (CLK/P_DIV) - 1;         /* Top value */

    *STK_CSR = 0x0005;              /* Enable & select processor clock */
    *STK_CSR |= 0x0002;            /* Enable interrupt request */

    *SHPR3 &= ~0x33000000;         /* Low priority (high value) */
    *SHPR3 |=  0xCC000000;         /* Low priority (high value) */
}



/* ##########################################################################
 * ########        APLICACIÓN        ########################################
 * ####################################################################### */

/* ****************************************************************************
 * FIJAR EL ESTADO DE xxx
 * ************************************************************************* */

void CLOCK_Set(){

}

void CLOCK_Get(){

}
