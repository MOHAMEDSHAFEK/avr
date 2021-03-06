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
#include "LCD_4BIT_Interface.h"
#include "GIE_Interface.h"
#include "ADC_Interface.h"
#include <avr/delay.h>

void main (void)
{
	/*u16 Digital_value;
	u16 Analog_value;
	LCD_Vid4Initialization();
	LCD_Write4String("analog signal:",0,0);
	ADC_VidInit();
	DIO_VidSetPinDirection(PORTB,PIN0,OUTPUT);
	DIO_VidSetPinDirection(PORTB,PIN1,OUTPUT);
	DIO_VidSetPinDirection(PORTB,PIN7,OUTPUT);
	while(1)
	{
		Digital_value= ADC_U16GitDigital(0);
		Analog_value=((Digital_value*5000UL)/1024);
		LCD_GoToPosition(1,0);
				LCD_VidDisp4Number(Analog_value);

		if ((Analog_value <= 400) )
				{
					DIO_VidSetPinValue(PORTB,PIN7,0);
					DIO_VidSetPinValue(PORTB,PIN1,0);
					DIO_VidSetPinValue(PORTB,PIN0,0);
				}
		else if ((Analog_value > 400)&& (Analog_value <= 1200) )
		{
			DIO_VidSetPinValue(PORTB,PIN7,0);
			DIO_VidSetPinValue(PORTB,PIN1,0);
			DIO_VidSetPinValue(PORTB,PIN0,1);
		}
		else if ((Analog_value > 1200)&& (Analog_value <= 2500))
		{
			DIO_VidSetPinValue(PORTB,PIN7,0);
			DIO_VidSetPinValue(PORTB,PIN0,0);
			DIO_VidSetPinValue(PORTB,PIN1,1);
		}

		else if ((Analog_value > 2500)&& (Analog_value <5000))
		{
			DIO_VidSetPinValue(PORTB,PIN7,1);
			DIO_VidSetPinValue(PORTB,PIN0,0);
			DIO_VidSetPinValue(PORTB,PIN1,0);
		}
	}*/



	//lcd int
		LCD_Vid4Initialization();
		LCD_Write4String("analog signal:",0,0);

		//INTRRUPT ENABLE
		GIE_Enable();
		//adc init
		ADC_VidInit();
		//PORT DIRCTION
		DIO_VidSetPinDirection(PORTB,PIN0,OUTPUT);
		DIO_VidSetPinDirection(PORTB,PIN1,OUTPUT);
		DIO_VidSetPinDirection(PORTB,PIN7,OUTPUT);

		//ADC ENABLE
		ADC_VidEnableInt();
		//ADC CHANNAL
		ADC_VidStartConvertion(0);
		while(1)
		{
		}
}


