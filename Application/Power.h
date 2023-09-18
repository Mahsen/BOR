#ifndef __POWER_H
#define __POWER_H
//----------------------------------------------------------
#include "defines.h"	
#include "gpio.h"
#include "adc.h"
//----------------------------------------------------------
#define POWER_STATE_HOLD                                  0
#define POWER_STATE_TURNOFF                               1
#define POWER_STATE_TURNON                                2

#define POWER_TURNOFF_OFFSET                             698 //2.7 -> /3.6 -> 0.75 -> *(1024/1.1) -> 698
#define POWER_TURNON_OFFSET                              775 //3 -> /3.6 -> 0.83 -> *(1024/1.1) -> 775
//----------------------------------------------------------
void __init_Power(void);
void POWER_Machine(void);
#endif
