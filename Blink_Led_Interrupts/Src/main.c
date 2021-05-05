// ==========================================================================
// ==========================================================================
// ========  EJEMPLO INTERRUPCIONES: main.c =================================
// ==========================================================================
// ==========================================================================

/* ****************************************************************************
 * DECLARACIONES
 *************************************************************************** */

/* *** NÚCLEO CORTEX ******************************************************* */

#define STK_CSR         ((volatile unsigned int *)(0xE000E010))
#define STK_RVR         ((volatile unsigned int *)(0xE000E014))
#define STK_CVR         ((volatile unsigned int *)(0xE000E018))
#define STK_CALIB       ((volatile unsigned int *)(0xE000E01C))

#define CPUID           ((volatile unsigned int *)(0xE000ED00))
#define ICSR            ((volatile unsigned int *)(0xE000ED04))
#define AIRCR           ((volatile unsigned int *)(0xE000ED0C))
#define SCR             ((volatile unsigned int *)(0xE000ED10))
#define CCR             ((volatile unsigned int *)(0xE000ED14))
#define SHPR2           ((volatile unsigned int *)(0xE000ED1C))
#define SHPR3           ((volatile unsigned int *)(0xE000ED20))

/* *** STM32F042 *********************************************************** */

#define RCC_AHBENR      ((volatile unsigned int *)(0x40021000+0x14))
#define GPIOB_MODER     ((volatile unsigned int *)(0x48000400+0x00))
#define GPIOB_ODR       ((volatile unsigned int *)(0x48000400+0x14))


/* ****************************************************************************
 * DEFINICIONES Y CONSTANTES
 *************************************************************************** */

#define	CLOCK	(8000000)		/* Velocidad del reloj en Hercios */
#define RITHM	(1000)		/* Ritmo de interrupción periódica */

/* ****************************************************************************
 * VARIABLES
 *************************************************************************** */

static unsigned int ImageLED;


/* ############################################################################
 * ############################################################################
 * #########        APLICACIÓN        #########################################
 * ############################################################################
 * ######################################################################### */

/* ****************************************************************************
 * APLICACIÓN
 *************************************************************************** */

int main(void)
{

	/* --- INICIALIZACIONES: PUERTOS --------------------------------------- */

	*RCC_AHBENR |= 0x007E0000;  /* ENABLE ALL PORTS (COMMON) */

    *GPIOB_MODER &= ~0x000000C0;	/* PB3 como ... */
    *GPIOB_MODER |=  0x00000040;	/* ... salida */


    /* ---- INICIALIZACIONES: TEMPORIZADOR DE SISTEMA ---------------------- */

    *STK_RVR = (CLOCK/RITHM) - 1;         /* Top value */
    *STK_RVR = (CLOCK/RITHM) - 1;         /* Top value */

    *STK_CSR = 0x0005;              /* Enable & select processor clock */
    *STK_CSR |= 0x0002;            /* Enable interrupt request */

    *SHPR3 &= ~0x33000000;         /* Low priority (high value) */
    *SHPR3 |=  0xCC000000;         /* Low priority (high value) */

    /* --- ESTADO DEL LED -------------------------------------------------- */

    ImageLED = 0x0F0F0F0F;		/* Estado del LED */

	/* --- BUCLE PRINCIPAL ------------------------------------------------- */

    for(;;)
    {
    }
}


/* **************************************************************************
 * INTERRUPCIÓN DE TEMPORIZADOR DE SISTEMA. PERIÓDICA
 * --------------------------------------------------------------------------
 ************************************************************************* */

void SysTick_Handler()
{
static unsigned int phase;

    /* --- EXTRACCIÓN DE MÁSCARA ----------------------------------------- */

    unsigned int mask = 1 << ((phase/125) % 32);

    /* --- APLICACIÓN DEL ESTADO ACTUAL AL LED --------------------------- */

    if ((mask & ImageLED) == 0)
    {
		*GPIOB_ODR &= ~0x00000008;		/* PB3 a nivel bajo */

    }
    else
    {
		*GPIOB_ODR |= 0x00000008;		/* PB3 a nivel alto */
    }

    /* --- INCREMENTO DE FASE -------------------------------------------- */

    ++phase;
}
