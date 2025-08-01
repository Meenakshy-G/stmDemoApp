//**************************** gpioControl *************************************
// Copyright (c) 2025 Trenser Technology Solutions
// All Rights Reserved
//******************************************************************************
// Summary : Contains global constants and forward declarations.
// Note    : None
//******************************************************************************
#ifndef _GPIO_CONTROL_H
#define _GPIO_CONTROL_H

//******************************* Include Files ********************************
#include <stdbool.h>
#include "gpioControl.h"
#include "main.h"
//******************************* Global Types *********************************

//***************************** Global Constants *******************************
#define MAXIMUM (100);
//***************************** Global Variables *******************************

//**************************** Forward Declarations ****************************
bool gpioControlBlinkLed(UART_HandleTypeDef *huart3);

//*********************** Inline Method Implementations ************************

//******************************************************************************

#endif // _GPIO_CONTROL_H
// EOF
