/* ************************************************************
 * RELOJ.c
 *
 *  Created on: 18 may. 2021
 *      Author: Ingenieria
 */


/* * **********************************************************************
 * DEFINICIONES Y CONSTANTES
 * ********************************************************************* */

#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"

#include "CLOCK_.h"

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

void CLOCK_Ini(uint32_t prmi)
{

	/* --- SELECCIONAR LA FRECUENCIA ENTRE LAS DISPOIBLES -------------- */


	/* --- FINAL DE INICIALIZACIONES ----------------------------------- */


}


/* ########################################################################
 * ########################################################################
 * ########        APLICACIÓN        ######################################
 * ########################################################################
 * ##################################################################### */

/* ************************************************************************
 * LEER EL RELOJ DEL PROCESADOR
 * ------------------------------------------------------------------------
 * ********************************************************************* */

/**
 * \brief	LEE LA FRECUENCIA DE RELOJ DEL PROCESADOR
 *
 *
 */

uint32_t CLOCK_GetFreq()
{
	return(8000000);
}

/* ########################################################################
 * ########################################################################
 * ##################################################################### */


/**
 * \file
 *
 * # DESCRIPCIÓN
 *
 * Este módulo se encarga de preparar el reloj (o mejor dicho, los relojes)
 * con los que funcionará el microcontrolador.
 *
 * El reloj parte de un oscilador principal (Que puede ser un ....
 * ....
 *
 * En este módulo simplificado...
 *
 * PLLL
 *
 *
 * En este módulo se considera que el microcontrolador va a funcionar
 * siempre con el reloj intern
 *
 * # ACCESO A LA MEMORIA FLASH
 *
 * La memoria FLASH en la que se coloca el códig ejecutable tiene una
 * velocidad máxima de acceso que es menor que la velocidad máxima
 * de reloj del sistema.
 *
 * En caso de seleccionar un reloj de mayor frecuencia que la que es
 * posible para acceder a la memoria
 *
 *
 */
