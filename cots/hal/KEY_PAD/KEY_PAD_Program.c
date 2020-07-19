#include "STD_TYPES.h"
#include "KEY_PAD_Interface.h"
#include "BIT_MATH.h"
#include "avr/delay.h"
#include "DIO_Interface.h"


void KEY_PAD_VidInit(void)
{
	DIO_VidSetPortDirection(PORTA,0b00001111);
	DIO_VidSetPortValue(PORTA,0xff);
}
u8 KEY_PAD_VidGitPresed(void)
{
	u8 colum, row;
	u8 keypad=48;
	for(colum=0;colum<4;colum++)
	{
		DIO_VidSetPinValue(PORTA,colum,0);
		for(row=4;row<8;row++)
		{
			if(0==GET_BIT(PORTA,row))
			{
				keypad=(row+1)*(colum+1);
				while(0==GET_BIT(PORTA,row))
				{
					_delay_ms(20);
				}
			}
		}
		DIO_VidSetPinValue(PORTA,colum,1);
	}
	return keypad;
}



