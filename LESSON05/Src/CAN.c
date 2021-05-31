/* ************************************************************************
 * CAN.c
 * ========================================================================
 * ********************************************************************* */

/* * **********************************************************************
 * DECLARACIONES
 * ********************************************************************* */

#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"
#include "STM32F042_VECT_.h"

#include "CAN_.h"

/* * **********************************************************************
 * DEFINICIONES Y CONSTANTES
 * ********************************************************************* */


/* * **********************************************************************
 * VARIABLES
 * ********************************************************************* */

/* ########################################################################
 * ########################################################################
 * ########        SISTEMA        #########################################
 * ########################################################################
 * ##################################################################### */

/* ************************************************************************
 * INICIALIZACIÓN
 * ------------------------------------------------------------------------
 *********************************************************************** */

uint32_t CAN_Ini(uint32_t prmi)
{
	return(0);
}

/* ************************************************************************
 * PERIÓDICA
 * ------------------------------------------------------------------------
 *********************************************************************** */

void CAN_Per()
{

}

/* ************************************************************************
 * INTERRUPCIÓN PROPIA
 * ------------------------------------------------------------------------
 *********************************************************************** */

void CEC_CAN_IRQHandler()
{

}

/* ########################################################################
 * ########################################################################
 * ########        APLICACIÓN        ######################################
 * ########################################################################
 * ##################################################################### */

/* ************************************************************************
 * ENVÍA UN PAQUETE CAN
 * ------------------------------------------------------------------------
 * ********************************************************************* */


/* ************************************************************************
 * RECIBE UN PAQUETE CAN
 * ------------------------------------------------------------------------
 * ********************************************************************* */


/* ########################################################################
 * ########################################################################
 * ##################################################################### */

/**
 * \file
 *
 * # DESCRIPCIÓN
 *
 */

