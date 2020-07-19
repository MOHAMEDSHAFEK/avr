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
#include "ADC_Regster.h"
#include "ADC_Interface.h"
#include "LCD_4BIT_Interface.h"
#include "GIE_Interface.h"
#include "GIE_Regster.h"
#include "TIMER_Regster.h"
#include "TIMER_Interface.h"
#include "avr/delay.h"
volatile u8 c=0;
void main (void)
{
	u8 x;
	//lcd int
	LCD_Vid4Initialization();
	LCD_Write4String("analog signal:",0,0);
	DIO_VidSetPinDirection(PORTD,PIN5,OUTPUT);

	TIMER0_VidInit(TINER0_NORMAL_MODE,TINER0_SCALER_8);
	Timer0_VidOverInterrupt_Enable();
	TCNT0=24;
	_delay_us(100);
	x=TCNT0;
	LCD_VidDisp4Number(x);
while(1)
	{

	}
}
//TIMER 0 FUNCTION TOGGAL LED
ISR(TIMER0_OV )
{
	c++;
	if(4==c)
	{
		DIO_VidToggPinValue(PORTB,PIN7);
		TCNT0=24;
		c=0;
	}
}
