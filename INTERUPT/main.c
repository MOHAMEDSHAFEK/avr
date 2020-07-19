/*
 * main.c
 *
 *  Created on: May 30, 2020
 *      Author: MGIsmail
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Register.h"
#include "DIO_Interface.h"
#include "ADC_Interface.h"
#include "EXI_Interface.h"
#include <avr/delay.h>

void main (void)
{
	DIO_VidSetPinDirection(PORTA,PIN0,OUTPUT);
	EXI_VidInt();
	EXI_Enable();
	GIE_Enable();


	while(1)
	{
		DIO_VidSetPinValue(PORTA,PIN0,0);
	}
}
