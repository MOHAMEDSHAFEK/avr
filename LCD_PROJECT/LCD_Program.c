#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "avr/delay.h"
#include "DIO_Interface.h"
#include "DIO_Register.h"

#define LCD_Port PORTD

void LCD_VidInit8bit(void)
{
	_delay_ms(50);
	DIO_VidSetPortDircection(1,0xff);
	DIO_VidSetPortDircection(0,0b00111000);
	 LCD_VidWriteCommand8bit(0b00111000);	//function set
	_delay_ms(1);
	LCD_VidWriteCommand8bit (0b00001100);	//Display on
	_delay_ms(1);
	LCD_VidWriteCommand8bit(0b00000001);	//Clear Display
	_delay_ms(2);
	
}

	void LCD_VidWriteCommand8bit(u8 LOC_u8command)
	{
		DIO_VidSetPinValue(0,PIN3,LOW); //RS=0
		DIO_VidSetPinValue(0,PIN4,LOW);	//RW=0
		DIO_VidSetPortValue(PORTD,LOC_u8command);
		
		DIO_VidSetPinValue(0,PIN5,HIGH);	//E=High
		_delay_ms(1);
		DIO_VidSetPinValue(0,PIN5,LOW);		//E=Low
		_delay_ms(1);
		
		
	}
	
	void LCD_VidWriteData8bit(u8 LOC_u8data)
	{
		DIO_VidSetPinValue(0,PIN3,HIGH); //RS=0
		DIO_VidSetPinValue(0,PIN4,LOW);	//RW=0
		DIO_VidSetPortValue(3,LOC_u8data);
		
		DIO_VidSetPinValue(0,PIN5,HIGH);	//E=High
		_delay_ms(1);
		DIO_VidSetPinValue(0,PIN5,LOW);		//E=Low
		_delay_ms(1);
	}
