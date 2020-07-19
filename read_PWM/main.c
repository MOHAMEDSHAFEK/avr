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
#include "TIMER_Regster.h"
#include "EXI_Regster.h"

#include <util/delay.h>
void Vid_Read_PWM(void);
volatile u8 flag=0;
volatile u32 snap_1=0;
volatile u32 snap_2=0;
volatile u32 snap_3=0;
volatile u8 OV=0;
//void func_1(void);
int main (void)
{

	//DIO INTIALIZATION
	DIO_VidSetPinDirection(PORTB,PIN3,OUTPUT);
	DIO_VidSetPinDirection(PORTD,PIN6,INPUT);

	//GLUBAL INTRRUPT ENABALE
	GIE_Enable();
	//TIMER_0 INT
	TIMER_VidEnable();
	//OCR TIMER 0
	Tim_Count0_VidCompareReg(128);
	//TIMER_1 INTI
	TIMER_1_VidEnable();
	//INPUT CABTURE TIMER 1 ENABE
	TIMER_1_INPUT_CAPUER_VidEnable();
	//lcd int
	LCD_Vid4Initialization();
while(1)
	{
	if(3==flag)
	{
		Vid_Read_PWM();
	}
	}
return 0;
}

ISR(TIMER_1_CAPT_VECT)
{
	if(0==flag)
	{
		snap_1=u16_return_ICR1()+OV*65535;
		OV=0;
		flag=1;
		u8_TOGAL_ICES1();
	}
	else if(1==flag)
	{
		snap_2=u16_return_ICR1()+OV*65535;
		OV=0;
		flag=2;
		u8_TOGAL_ICES1();
	}
	else if(2==flag)
	{
		snap_3=u16_return_ICR1()+OV*65535;
		OV=0;
		flag=3;
	}
}
ISR(TIMER_1_OVF_VECT)
{
	OV++;
}

void Vid_Read_PWM(void)
{
	u16 duty= 0;
	u16 frq=0;
	duty=((snap_2-snap_1)*100)/((snap_2-snap_1)+(snap_3-snap_2));
	frq=1000000*8/((snap_2-snap_1)+(snap_3-snap_2));
	LCD_Write4String("D:",0,0);
	LCD_VidDisp4Number(duty);
	LCD_Write4String("F:",1,0);
	LCD_VidDisp4Number(frq);
	LCD_Write4String("S2:",0,5);
	LCD_VidDisp4Number(snap_2);
	LCD_Write4String("S3:",1,10);
	LCD_VidDisp4Number(snap_3);
	flag=0;
}

