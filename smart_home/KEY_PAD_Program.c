#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "KEY_PAD_Interface.h"
#include "avr/delay.h"

void KEY_PAD_VidInit(void)
{
	DIO_VidSetPortDirection(KEY_pad_port,KEY_pad_dirction_init);
	DIO_VidSetPortValue(KEY_pad_port,KEY_pad_value_init);
}

u8 KEY_PAD_VidGitPresed(void)
{
	u8 colum, row;
	u8 keypad_OUT=0;
	u8 KEYPAmap[4][4]={{1,2,3,4},
										{5,6,7,8},
										{9,10,11,12},
										{13,14,15,'c'}};
	for(colum=0;colum<4;colum++)
	{
		DIO_VidSetPinValue(KEY_pad_port,colum,0);
		for(row=4;row<8;row++)
		{
			if(puuton_pressed==DIO_u8GetPinValue(KEY_pad_port,row))
			{
				keypad_OUT=KEYPAmap[row-4][colum];
				while(puuton_pressed==DIO_u8GetPinValue(KEY_pad_port,row))
				{

				}
				_delay_ms(50);
			}
		}
		DIO_VidSetPinValue(KEY_pad_port,colum,1);
	}
	return keypad_OUT;
}

u8 KEY_PAD_VidGitPresedcalc(void)
{
	u8 colum, row;
	u8 keypad_OUT=0;
	u8 KEYPAmap[4][4]={{1,2,3,'+'},
											{4,5,6,'-'},
											{7,8,9,'*'},
											{'l','.','c','='}};
	for(colum=0;colum<4;colum++)
	{
		DIO_VidSetPinValue(KEY_pad_port,colum,0);
		for(row=4;row<8;row++)
		{
			if(puuton_pressed==DIO_u8GetPinValue(KEY_pad_port,row))
			{
				keypad_OUT=KEYPAmap[row-4][colum];

				while(puuton_pressed==DIO_u8GetPinValue(KEY_pad_port,row))
				{
				}
				_delay_ms(40);
			}
		}
		DIO_VidSetPinValue(KEY_pad_port,colum,1);
	}
	return keypad_OUT;
}


