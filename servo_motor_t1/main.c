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
#include "TIMER_Interface.h"
#include "avr/delay.h"

void func(void);
void func1(void);
void func2(void);
void main (void)
{
	//lcd int
	LCD_Vid4Initialization();
	LCD_Write4String("analog signal:",0,0);
	DIO_VidSetPinDirection(PORTD,PIN5,OUTPUT);
	//ADC_VidInit();
	//TIMER init
TIMER_VidEnable();
//	TIMER_VidSetCallBack(func);
	//preloadvalue
	//Tim_Count0_VidCounterReg(238);
	//OCR LIMET
//	Tim_Count0_VidCompareReg(128);
	//INTRRUPT ENABLE
//	GIE_Enable();
		/*	//adc init
		//ADC_VidInit();
		//ADC callback function
	//	ADC_VidSetCallBack(func2);
		//ADC ENABLE
	//	ADC_VidEnableInt();
		//ADC CHANNAL
		//ADC_VidStartConvertion(0);*/
//SERVO MOTOR
Tim1_Count0_ICR1(625);

while(1)
	{
	Tim1_Count0_OCR1A(62);
	_delay_ms(500);
	Tim1_Count0_OCR1A(31);
	_delay_ms(500);
	Tim1_Count0_OCR1A(93);
	_delay_ms(500);
	Tim1_Count0_OCR1A(31);
	_delay_ms(500);
	}
}



//TIMER 0 FUNCTION TOGGAL LED

void func(void)
{
	u8 static counter =0;
	counter++;
	if(counter==244)
	{
		DIO_VidSetPinDirection(PORTC,PIN0,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN1,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN2,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN3,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN4,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN5,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN6,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN7,OUTPUT);
		DIO_VidToggPinValue(PORTC,PIN7,1);
		DIO_VidToggPinValue(PORTC,PIN0,1);
		DIO_VidToggPinValue(PORTC,PIN1,1);
		DIO_VidToggPinValue(PORTC,PIN2,1);
		DIO_VidToggPinValue(PORTC,PIN3,1);
		DIO_VidToggPinValue(PORTC,PIN4,1);
		DIO_VidToggPinValue(PORTC,PIN5,1);
		DIO_VidToggPinValue(PORTC,PIN6,1);
		counter=0;
 }
}
void func2(void)
{
	u16  Analog_value=0;
	Analog_value=(((ADC*500UL)/1024));
	LCD_GoToPosition(1,0);
	LCD_VidDisp4Number(Analog_value);
}
//ADC function pototionmater

void func1(void)
{
		u16 static Analog_value=0;
		LCD_clearpostion();
		LCD_GoToPosition(1,0);
		LCD_VidWrite4Data(0);
		LCD_clearpostion();
		LCD_GoToPosition(1,1);
		LCD_VidWrite4Data(0);
		LCD_clearpostion();
		LCD_GoToPosition(1,2);
		LCD_VidWrite4Data(0);
		LCD_clearpostion();
		LCD_GoToPosition(1,3);
		LCD_VidWrite4Data(0);
		LCD_clearpostion();
		LCD_GoToPosition(1,4);
		LCD_VidWrite4Data(0);
		Analog_value=(((ADC*5000UL)/1024));

		if(Analog_value<=1500)
		{
			LCD_clearpostion();
			LCD_GoToPosition(1,3);
			LCD_VidWrite4Data(0);
			LCD_clearpostion();
			LCD_GoToPosition(1,2);
			LCD_VidWrite4Data(0);
			LCD_GoToPosition(1,0);
			LCD_VidDisp4Number(0);
			LCD_Write4String("%:",1,1);
		}
		else if(Analog_value>1200 && Analog_value<=2200 )
		{
			LCD_clearpostion();
			LCD_GoToPosition(1,3);
			LCD_VidWrite4Data(0);
			Analog_value=25;
			LCD_GoToPosition(1,0);
			LCD_VidDisp4Number(Analog_value);
			LCD_Write4String("%:",1,2);
		}

		else if(Analog_value>2200 && Analog_value<=2700 )
		{
			LCD_clearpostion();
			LCD_GoToPosition(1,3);
			LCD_VidWrite4Data(0);
			Analog_value=50;
			LCD_GoToPosition(1,0);
			LCD_VidDisp4Number(Analog_value);
			LCD_Write4String("%:",1,2);
		}
		else if(Analog_value>2700 && Analog_value<=3500 )
			{
			LCD_clearpostion();
			LCD_GoToPosition(1,3);
			LCD_VidWrite4Data(0);
				Analog_value=75;
				LCD_GoToPosition(1,0);
				LCD_VidDisp4Number(Analog_value);
				LCD_Write4String("%:",1,2);
			}
		else
		{
			Analog_value=100;
			LCD_GoToPosition(1,0);
			LCD_VidDisp4Number(Analog_value);
			LCD_Write4String("%:",1,3);
		}
}
