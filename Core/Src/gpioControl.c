//**************************** gpioControl *************************************
// Copyright (c) 2025 Trenser Technology Solutions
// All Rights Reserved
//******************************************************************************
// File    : gpioControl.c
// Summary : Contains program to control the board Led in STM32 devkit.
// Note    : Header files are included.
// Author  : Meenakshy G
// Date    : 30/JULY/2025
//******************************************************************************
//******************************* Include Files ********************************
#include "gpioControl.h"
#include <stdio.h>
#include <string.h>
#include "common.h"
#include "main.h"

//******************************* Local Types **********************************

//***************************** Local Constants ********************************

//***************************** Local Variables ********************************

//**************************** Local Functions *********************************

//***************************.gpioControlBlinkLed.******************************
// Purpose : Toggle the board Led high and low.
// Inputs  : None.
// Outputs : None.
// Return  : True if toggled Led successfully, else false.
// Notes   : None.
//******************************************************************************
bool gpioControlBlinkLed(UART_HandleTypeDef *huart3)
{
	bool blFunctionStatus = false;
	uint8 ucPrintSentence[] = "This is a sentence\n";
	uint32 ulTimeOut = 100;

	HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_14);
	HAL_Delay(1500);
	HAL_UART_Transmit(huart3, ucPrintSentence, sizeof(ucPrintSentence)-1, ulTimeOut);
	blFunctionStatus = true;

	return blFunctionStatus;
}
//******************************************************************************
// EOF
