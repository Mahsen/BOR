//*********************************************************** Explanation ***************************************************************//
/*
Last Update : 13960324
*/
//************************************************************* Warning *****************************************************************//
/*
none
*/
//************************************************************* Wizard ******************************************************************//
/*
none
*/
//************************************************************ defineds ******************************************************************//
/*
none
*/
//************************************************************ includes ******************************************************************//
#include "sleep.h"
//************************************************************ variables *****************************************************************//
/*
none
*/
//************************************************************* opjects ******************************************************************//
/*
none
*/
//************************************************************ functions *****************************************************************//
void __init_Sleep(void)
{
        MCUCR = (1 << SM1);
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void SLEEP_Run(void)
{
        __enable_interrupt();
        MCUCR |= (1 << SE);
        __sleep();
}
//*************************************************************** tasks *******************************************************************//
/*
none
*/
//************************************************************** vectors ******************************************************************//
/*
none
*/
//****************************************************************************************************************************************//

