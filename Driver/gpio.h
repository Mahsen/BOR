#ifndef __GPIO_H
#define __GPIO_H
//----------------------------------------------------------
#include "defines.h"	
//----------------------------------------------------------
#define GPIO_PIN_DIRCTION                              DDRB_Bit4
#define GPIO_PIN_OUTPUT                                PORTB_Bit4
//----------------------------------------------------------
void __init_GPIO(void);
void __uninit_GPIO(void);
void GPIO_Output(U8 Value);
#endif
