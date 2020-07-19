/*
 * main.c
 *
 *  Created on: May 29, 2020
 *      Author: shafek
 */
	#include "STD_TYPES.h"
	#include "BIT_MATH.h"
	#include "DIO_Interface.h"
	#include <avr/delay.h>
	void main(void)
	{
		/*DIO_VidSetPinDircection (PORTD,PIN0,INPUT);
		DIO_VidSetPinValue (PORTD,PIN0,HIGHE);*/
		DIO_VidSetPortDirection(PORTC, OUTPUT);
		DIO_VidSetPortDirection(PORTA, INPUT);
		DIO_VidSetPortValue(PORTA,255);
	    while (1)
	    {
	    	/*DIO_VidSetPinValue (PORTD,PIN0,HIGHE);
	    	_delay_ms(1000);
	    	DIO_VidSetPinValue (PORTD,PIN0,LOW);
	    	_delay_ms(1000);*/
	    	if(DIO_U8GitPinValue(PORTA,PIN0)==0)
	    	 {
	    		DIO_VidSetPortValue(PORTC, 255);
	    		//DIO_VidSetPinValue(PORTC,PIN0,LOW);
	    	 }
	    	else
	    	{
	    		DIO_VidSetPortValue(PORTC,LOW);
	    		//DIO_VidSetPinValue(PORTC,PIN0,HIGH);
	    	}
		}
	}
