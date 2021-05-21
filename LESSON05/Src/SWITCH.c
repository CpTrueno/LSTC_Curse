/* ***************************************************************************
 * SWITCH.c
 * ===========================================================================
 * ************************************************************************ */


/**
 * \file
 * \brief	MÓDULO DE CONTROL DE PULSADORES
 *
 * \author	J.R.G.
 * \date   MAY,16. 2021
 *
 * # HARDWARE
 *
 * | PUERTO | DESCRIPCIÓN                            | NOTAS |
 * |--------|----------------------------------------|-------|
 * |   PB0  | Entrada del pulsador #1                |       |
 * |   PB1  | Entrada del pulsador #2                |       |
 *
 *
 * # RECURSOS
 *
 * Puertos indicados en "HARDWARE"
 *
 * # NOTAS
 *
 */


/* **************************************************************************
 * DECLARACIONES
 * *********************************************************************** */

#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"

#include "SWITCH_.h"


/* **************************************************************************
 * DEFINICIONES Y CONSTANTES
 ************************************************************************* */

#define MASK	0x00000FFF 		/* Máscara de 12 bits (12 ms) */

/* **************************************************************************
 * VARIABLES
 ************************************************************************* */

static uint32_t     switch1Input;	/* Estado de entrada para filtraje */
static uint32_t     switch2Input;

static uint32_t     switch1Stat;	/* Flasg de estado de la entrada */
static uint32_t     switch2Stat;

/* ##########################################################################
 * ##########################################################################
 * ########        SISTEMA        ###########################################
 * ##########################################################################
 * ####################################################################### */

/* **************************************************************************
 * INICIALIZACIONES
 * --------------------------------------------------------------------------
 * *********************************************************************** */

/**
 * \brief	INICIALIZACIÓN DEL MÓDULO SWITCH
 * \param prmi	Se coloca por costumbre. Reservado, No se usa.
 * \return	Se coloca por costumbre. No devuielve nada útil.
 *
 * Esta rutina inicializa el hardware y las variables antes de que se pueda
 * llamar de forma segura a la rutina periódica.
 *
 *
 */

uint32_t SWITCH_Ini(uint32_t prmi)
{

	/* --- INICIALIZACIÓN DE HARDWARE ------------------------------------ */

	*GPIOB_PUPDR &= ~0x0000000F; 		/* PB0, PB1... */
	*GPIOB_PUPDR |=  0x00000005;  		/* ... pull.up */

	*GPIOA_MODER &= ~0x0000000F;		/* PB0 y PB1... entradas */

	/* --- INICIALIZACIÓN DE VARIABLES ----------------------------------- */

    switch1Input = 0x00000000;			/* Inicialmente no pusada */
    switch2Input = 0x00000000;			/* Inicialmente no pusada */

    switch1Stat = 0x00000000;			/* Inicialmente no pusada */
    switch2Stat = 0x00000000;			/* Inicialmente no pusada */

	/* --- FINAL DE INICIALIZACIONES ------------------------------------- */

	return(0);
}

/* **************************************************************************
 * RUTINA PERIÓDICA
 * --------------------------------------------------------------------------
 * *********************************************************************** */

/**
 * \brief	RUTINA PERIÓDICA DEL MÓDULO SWITCH
 *
 * Esta rutina, para que el módulo funcione correctamente, debe llamarase a
 * un ritmo de 1kHz (cada milisegundo).
 *
 * La rutina lee el estao de cada entrada y actualiza una variable que
 * memoriza el estado de las entrada en ese instante junto con las 31
 * anteriores (registro de 32 bits).
 *
 * Con el valor obtenido, comprueba si un número determinado de bits más
 * recientes (entre 1 y 32 ) mantiene un estado estable. En ese caso,
 * actualiza el estado "filtrado" de la entrada (el que se entregará a
 * la aplicación).
 *
 * \todo	DETECCIÓN DE FLANCOS DE ENTRADA Y DE SALIDA y AUTOREPETICIÓN
 *
 */

void SWITCH_Per()
{
	/* --- ACTUALIZAR LAS IMÁGENES MEMORIZADAS DE LA ENTRADA ------------- */

	switch1Input = switch1Input << 1;		/* Desplazar estado anterior */
	if((*GPIOB_IDR & 0x00000001) == 0)		/* ¿Pulsador 1 pulsado? */
	{
		switch1Input += 1;		/* Sí, nuevo bit es 1 */
	}

	switch2Input = switch2Input << 1;		/* Desplazar estado anterior */
	if((*GPIOB_IDR & 0x00000002) == 0)		/* ¿Pulsador 1 pulsado? */
	{
		switch2Input += 1;		/* Sí, nuevo bit es 1 */
	}

	/* --- ACTUALIZAR EL ESTADO ------------------------------------------ */

	if( (switch1Input & MASK) == 0)
	{
		switch1Stat &= ~SWITCH_BIT_ACTUALSTAT;
	}
	else if( (switch1Input & MASK) == MASK)
	{
		switch1Stat |= SWITCH_BIT_ACTUALSTAT;
	}

	if( (switch2Input & MASK) == 0)
	{
		switch2Stat &= ~SWITCH_BIT_ACTUALSTAT;
	}
	else if( (switch2Input & MASK) == MASK)
	{
		switch2Stat |= SWITCH_BIT_ACTUALSTAT;
	}


	/* --- DETECCIÓN DE FLANCOS? AUTOREPETICIÓN? ------------------------- */

		// EN DESARROLLO !!!!!!!!!!!!!!!!!!!!!!!!

    /* --- FINAL DE LA RUTINA PERIÓDICA ---------------------------------- */
}


/* ##########################################################################
 * ##########################################################################
 * ########        APLICACIÓN        ########################################
 * ##########################################################################
 * ####################################################################### */

/* *************************************************************************
 * LEER EL ESTADO DEL INTERRUPTOR 1
 * -------------------------------------------------------------------------
 * ********************************************************************** */

/**
 * brief	LECTURA DEL ESTADO (PROCESADO/FILTRADO) DE LA ENTRADA #1
 *
 * Lee los bits que representan el estado de la entrada 1
 * \todo	Considear PROCESO, borrado de flags y condiciones de carrera
 *
 */

uint32_t SWITCH_GetSW1()
{
    return(switch1Stat);
}

/**
 * brief	LECTURA DEL ESTADO (PROCESADO/FILTRADO) DE LA ENTRADA #2
 *
 * Lee los bits que representan el estado de la entrada 1
 * \todo	Considear PROCESO, borrado de flags y condiciones de carrera
 *
 */

uint32_t SWITCH_GetSW2()
{
    return(switch2Stat);
}

/* ##########################################################################
 * ##########################################################################
 * ####################################################################### */

/**
 * \file
 *
 * # DESCRIPCIÓN DEL MÓDULO SWITCH
 *
 * Este módulo mantiene el estado de las entradas de dos pulsadores de forma
 * independiente de una aplicación.
 *
 * Para ello emplea una rutina que debe ejecutarse periódicamente, lo que
 * facilita el filtraje de las entradas. Para evitar la lectura de los
 * rebotes que inevitablemente se producen en un contacto electromecánico,
 * es fundamental asegurar que la entrada es estable durante un determinado
 * tiempo.
 *
 * La inicialización prepara los puertos y las variables. La llamada
 * periódica (Se espera una llamada a un ritmo de 1kHz por parte del sistema)
 * mantiene el estado de la entrada para devolver un estado filtrado.
 *
 * El módulo indica el estado filtrado de la entrada, y además detecta los
 * flancos de pulsación y suelta.
 *
 */
