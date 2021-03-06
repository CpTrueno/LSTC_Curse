/*
 * CORTEXM_TYPES.H
 *
 *  Created on: Apr 25, 2021
 *      Author: Usuario
 */

#ifndef CORTEXM_TYPES_H_
#define CORTEXM_TYPES_H_



#define   FALSE       (1==0)
#define   TRUE        (!FALSE)

#define   PNULL       ((void *) 0)

// TOMADO DE #include <STDINT.H>
/* *** TIPOS ENTEROS. ANCHO EXACTO *************************************** */

typedef   signed   char        int8_t;
typedef   unsigned char        uint8_t;
typedef   signed   short       int16_t;
typedef   unsigned short       uint16_t;
typedef   signed   int         int32_t;
typedef   unsigned int         uint32_t;
typedef   signed   long long   int64_t;
typedef   unsigned long long   uint64_t;

/*
 * 7.18.1.4 Integer types capable of holding object pointers
 */

typedef signed   long           intptr_t;
typedef unsigned long           uintptr_t;

//typedef   WORD
//typedef


#endif /* CORTEXM_TYPES_H_ */


/* --- NOTAS ----------------------------------------------------------------

--- TAMAÑOS DE TIPOS EN IAR EWARM -------------------------------------------

Type                    Size      Range       Alignment
----------------------------------------------------------------------------
bool                    8 bit     0..1        1
char                    8 bit     0.255       1
signed char             8                     1
unsigned char           8                     1
signed short            16                    2
unsigned short          16                    2
signed int              32                    4
unsigned int            32                    4
signed long             32                    4
unsigned long           32                    4
signed long long        64 bit                8
unsigned long long      64 bit                8

float                   32 bit    23Mant/8Exp 4
double                  64 bit    52Mant/11Ex 8
long double             64 bit    52Mant/11Ex 8


[low][high]
[low][mlow][mhigh][high]

-------------------------------------------------------------------------- */

