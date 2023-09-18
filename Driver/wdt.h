#ifndef __WDT_H
#define __WDT_H
//----------------------------------------------------------
#include "defines.h"	
//----------------------------------------------------------
void __init_WDT(void);
void WDT_off(void);
void WDT_Prescaler_Change(void);
void WDT_Reset(void);
#endif
