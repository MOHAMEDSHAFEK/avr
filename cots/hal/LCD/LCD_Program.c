#include "STD_TYPES.h"
#include "LCD_Interface.h"
#include "BIT_MATH.h"
#include "avr/delay.h"
#include "DIO_Interface.h"


void LCD_VidInit(void)
{
	_delay_ms(50);
	DIO_VidSetPortDirection(PORTD,0xff);
	DIO_VidSetPinDirection(PORTA,PIN0,HIGH);
	DIO_VidSetPinDirection(PORTA,PIN1,HIGH);
	DIO_VidSetPinDirection(PORTA,PIN2,HIGH);
	
	LCD_VidWriteCommand(0b00111000);//fuction set
	_delay_ms(1);
	LCD_VidWriteCommand(0b00001100);//display on
	_delay_ms(1);
	LCD_VidWriteCommand(0b00000001);//clear display
	_delay_ms(2);
	
}

void LCD_VidWriteCommand(u8 LOC_u8Command)
{
	DIO_VidSetPinValue(PORTA,PIN0,LOW); //RS
	DIO_VidSetPinValue(PORTA,PIN1,LOW);   //RW
	DIO_VidSetPortValue(PORTD,LOC_u8Command); //WRITE
	DIO_VidSetPinValue(PORTA,PIN2,HIGH);   //EN
	_delay_ms(1);
	DIO_VidSetPinValue(PORTA,PIN2,LOW);   //EN
	_delay_ms(1);	
	
	
}
void LCD_VidWriteData(u8 LOC_u8Data)
{
	DIO_VidSetPinValue(PORTA,PIN0,HIGH); //RS
	DIO_VidSetPinValue(PORTA,PIN1,LOW);   //RW
	DIO_VidSetPortValue(PORTD,LOC_u8Data); //WRITE
	DIO_VidSetPinValue(PORTA,PIN2,HIGH);   //EN
	_delay_ms(1);
	DIO_VidSetPinValue(PORTA,PIN2,LOW);   //EN
	_delay_ms(1);
	
	
}



