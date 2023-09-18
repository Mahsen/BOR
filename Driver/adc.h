#ifndef __ADC_H
#define __ADC_H
//----------------------------------------------------------
#include "defines.h"	
//----------------------------------------------------------
#define ADC_PIN_DIRCTION                              DDRB_Bit3
#define ADC_PIN_ADMUX                                 ADMUX
#define ADC_PIN_ADCSRA                                ADCSRA
#define ADC_PIN_ADCSRB                                ADCSRB
#define ADC_PIN_DIDR                                  DIDR0
//----------------------------------------------------------
void __init_ADC(void);
void __uninit_ADC(void);
U16 ADC_Read(void);
U16 ADC_Arg(void);
#endif
