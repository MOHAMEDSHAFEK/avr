/*
 * main.c
 *
 *  Created on: May 30, 2020
 *      Author: MGIsmail
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include "KEY_PAD_Interface.h"
#include <avr/delay.h>

int main (void)
{
	u8 number;
	KEY_PAD_VidInit();
	LCD_VidInit();

	LCD_VidString("Mohamed=");
	/*LCD_VidWriteCommand(Clear_Display);
	_delay_ms(2);
	void LCD_VidGotoCGRAM();
	LCD_VidWriteData(0b00000110);
	LCD_VidWriteData(0b00000100);
	LCD_VidWriteData(0b00001110);
	LCD_VidWriteData(0b00000000);
	LCD_VidWriteData(0b00000100);
	LCD_VidWriteData(0b00000100);
	LCD_VidWriteData(0b00000100);
	LCD_VidWriteData(0b00000100);
	LCD_VidWriteData(0b00000000);
	LCD_VidWriteData(0b00000000);
	LCD_VidWriteData(0b00000000);
	LCD_VidWriteData(0b00000000);
	LCD_VidWriteData(0b00001100);
	LCD_VidWriteData(0b00000010);
	LCD_VidWriteData(0b00011111);
	LCD_VidWriteData(0b00000000);
	LCD_VidPostion(0,15);
	LCD_VidWriteData(0);
	LCD_VidPostion(0,14);
	LCD_VidWriteData(1);*/
	while(1)
	{
		number= KEY_PAD_VidGitPresed();
		if (number)
		LCD_VidDispNumber(number);
		/*LCD_VidPostion(0,0);
		LCD_VidString("Mohamed");
		_delay_ms(1000);
		LCD_VidWriteCommand(0b000000001);
		LCD_VidPostion(1,4);
		LCD_VidString("Mohamed");
		_delay_ms(1000);
		LCD_VidWriteCommand(0b000000001);
		LCD_VidPostion(0,9);
		LCD_VidString("Mohamed");
		_delay_ms(1000);
		LCD_VidWriteCommand(0b000000001);*/
	}
	return 0;
}

/*{
	LCD_VidInit();
	//LCD_VidWriteData('A');
	//LCD_VidWriteData('52');
	//LCD_VidString("result=");
	//LCD_VidDispNumber(234);
	/*LCD_VidPostion(0,15);
	LCD_VidWriteData(0);
	LCD_VidPostion(0,14);
	LCD_VidWriteData(1);
	LCD_VidPostion(0,13);
	LCD_VidWriteData(2);
	LCD_VidPostion(0,12);
	LCD_VidWriteData(3);*/
	/*while(1)
	{
		LCD_VidArabicNume();
		for(u8 i=15,j=0;i>11;i--,j++)
		{
		LCD_VidPostion(0,i);
		LCD_VidWriteData(j);
		}
		_delay_ms(1000);
		LCD_VidWriteCommand(Clear_Display);
		LCD_VidArabicNume();
		LCD_VidPostion(1,9);
		LCD_VidWriteData(0);
		LCD_VidPostion(1,8);
		LCD_VidWriteData(1);
		LCD_VidPostion(1,7);
		LCD_VidWriteData(2);
		LCD_VidPostion(1,6);
		LCD_VidWriteData(3);
		_delay_ms(1000);
		LCD_VidWriteCommand(Clear_Display);
		LCD_VidArabicNume();
		LCD_VidPostion(0,3);
		LCD_VidWriteData(0);
		LCD_VidPostion(0,2);
		LCD_VidWriteData(1);
		LCD_VidPostion(0,1);
		LCD_VidWriteData(2);
		LCD_VidPostion(0,0);
		LCD_VidWriteData(3);
		_delay_ms(1000);
		LCD_VidWriteCommand(Clear_Display);
		/*LCD_VidPostion(0,0);
		LCD_VidString("Mohamed");
		_delay_ms(1000);
		LCD_VidWriteCommand(0b000000001);
		LCD_VidPostion(1,4);
		LCD_VidString("Mohamed");
		_delay_ms(1000);
		LCD_VidWriteCommand(0b000000001);
		LCD_VidPostion(0,9);
		LCD_VidString("Mohamed");
		_delay_ms(1000);
		LCD_VidWriteCommand(0b000000001);
	}
}*/

