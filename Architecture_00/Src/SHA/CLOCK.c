/*
 * CLOCK.c
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */

// -- Drivers
#include "SHA\CLOCK_.h"
#include "SHA\CLOCK.h"

// -- System
#include "SYS\SYSTEM_.h"
#include "SYS\SYSTEM.h"	//Tengo dudas de si va en esta capa - CREO que NO le TOCA

//#include "SYS\CORTEXM_TYPES.h"
#include "SYS\STM32F042_REGS_.h"
#include "SYS\CORTEX_M0_.h"
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

void CLOCK_Ini(uint32_t CLK, uint32_t P_DIV){

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
