/*
 * smart_home.c
 *
 *  Created on: Jul 2, 2020
 *      Author: shafek
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Register.h"
#include "DIO_Interface.h"
#include "ADC_Regster.h"
#include "ADC_Interface.h"
#include "KEY_PAD_Interface.h"
#include "LCD_4BIT_Interface.h"
#include "GIE_Interface.h"
#include "TIMER_Interface.h"
#include "avr/delay.h"

void func(void);
void func_1(void);
void func_2(void);
void smart_home (void)
{
	u8 username[3];
	u8 arrindx=0;
	u8 password[3];
	u8 arrindx_pass=0;
	u8 i=0;
	u8 j=0;
	u8 key_pad_ret_value=0;
	//key pad intialization
	KEY_PAD_VidInit();
	//lcd int
	LCD_Vid4Initialization();
	//LCD_Write4String("value=",0,0);
//ADC_VidInit();
	//	TIMER_VidSetCallBack(func);
	//preload value
	//Tim_Count0_VidCounterReg(238);
	//TIMER init
	//TIMER_VidEnable();
	//INTRRUPT ENABLE
//GIE_Enable();
	//adc init
	//ADC_VidInit();
	//ADC callback function
//ADC_VidSetCallBack(func_2);
	//ADC ENABLE
//ADC_VidEnableInt();
	//ADC CHANNAL
//ADC_VidStartConvertion(0);
	//ADC_VidStartConvertion(1);
	LCD_VidWrite4Cmd(Clear_Display);
	LCD_Write4String("user name=",0,0);
	while(1)
	{
		key_pad_ret_value= KEY_PAD_VidGitPresedcalc();
		if(key_pad_ret_value)
		{
			LCD_VidDisp4Number(key_pad_ret_value);
			username[arrindx]=key_pad_ret_value;
			arrindx++;
			if(arrindx==3)
			{
				if((username[0]==1) && (username[1]==2)&& (username[2]==3))
				{
					LCD_VidWrite4Cmd(Clear_Display);
					LCD_Write4String("user name is correct",0,0);
					_delay_ms(1000);
					LCD_VidWrite4Cmd(Clear_Display);
					LCD_Write4String("password=",0,0);
														while(1)
															{
																key_pad_ret_value= KEY_PAD_VidGitPresedcalc();
																if (key_pad_ret_value)
																	{
															//	/*
																LCD_VidDisp4Number(key_pad_ret_value);
																	password[arrindx_pass]=key_pad_ret_value;
																	arrindx_pass++;
																	if(arrindx_pass==3)
																	{
																		if((password[0]==3) && (password[1]==2)&& (password[2]==1))
																		{
																			LCD_VidWrite4Cmd(Clear_Display);
																			LCD_Write4String("password is correct",0,0);
																			_delay_ms(1000);
																				LCD_VidWrite4Cmd(Clear_Display);
																							LCD_Write4String("1- Temputure ",0,0);
																								while(1)
																								{
																									key_pad_ret_value= KEY_PAD_VidGitPresedcalc();
																									if (key_pad_ret_value==1)
																										{
																											LCD_VidWrite4Cmd(Clear_Display);
																											_delay_ms(1000);
																											ADC_VidInit();
																											GIE_Enable();
																											ADC_VidSetCallBack(func_2);
																											ADC_VidEnableInt();
																											ADC_VidStartConvertion(0);

																										}
																									if (key_pad_ret_value==2 &&key_pad_ret_value==3)
																									{
																										LCD_VidWrite4Cmd(Clear_Display);
																										LCD_Write4String("plase enter the right number=",0,0);
																									}
																									if (key_pad_ret_value==99)
																											{
																													LCD_VidWrite4Cmd(Clear_Display);
																													LCD_Write4String("1- Temputure sensor=",0,0);
																														break;
																											}

																								}
																		}
																		else
																		{
																			LCD_VidWrite4Cmd(Clear_Display);
																			LCD_Write4String("password is wrong",0,0);
																			_delay_ms(1000);
																			arrindx_pass=0;
																			j++;
																			LCD_VidWrite4Cmd(Clear_Display);
																			if(j==3)
																			{
																				LCD_Write4String("no more try",0,0);
																				while(1)
																				{
																					key_pad_ret_value= KEY_PAD_VidGitPresedcalc();
																					if (key_pad_ret_value==99)
																					{
																						LCD_VidWrite4Cmd(Clear_Display);
																						j=0;
																						arrindx_pass=0;
																						LCD_Write4String("password=",0,0);
																						break;
																					}
																				}
																			}
																			else if(j<3)
																			{
																			LCD_Write4String("password=",0,0);}
																			}
																	}
																//*/
												}
											}
				}
				else
				{
					LCD_VidWrite4Cmd(Clear_Display);
					LCD_Write4String("user name is wrong",0,0);
					_delay_ms(1000);
					arrindx=0;
					i++;
					LCD_VidWrite4Cmd(Clear_Display);
					if(i==3)
					{
						LCD_Write4String("no more try",0,0);
						while(1)
						{
							key_pad_ret_value= KEY_PAD_VidGitPresedcalc();
							if (key_pad_ret_value==99)
							{
								LCD_VidWrite4Cmd(Clear_Display);
								i=0;
								arrindx=0;
								LCD_Write4String("user name=",0,0);
								break;
							}
						}
					}
					else if(i<3)
					{
					LCD_Write4String("user name=",0,0);}
					}

			}
		}


				/*if (key_pad_ret_value==43)
				{LCD_VidWrite4Data('+');}
				else if (key_pad_ret_value==61)
				{LCD_VidWrite4Data('=');}
				else if (key_pad_ret_value==42)
				{LCD_VidWrite4Data('*');}
				else if (key_pad_ret_value==45)
				{LCD_VidWrite4Data('-');}
				else if (key_pad_ret_value==46)
				{LCD_VidWrite4Data('.');}
				else if (key_pad_ret_value==108)
				{LCD_VidWrite4Data('0');}
				else if (key_pad_ret_value==99)
				{
					LCD_VidWrite4Cmd(Clear_Display);
				}
				else
					LCD_VidDisp4Number(key_pad_ret_value);*/
	}
}

//TIMER 0 FUNCTION TOGGAL LED
void func(void)
{
	u8 static counter =0;
	counter++;
	if(counter==123)
	{
		DIO_VidSetPinDirection(PORTC,PIN0,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN1,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN7,OUTPUT);
		DIO_VidToggPinValue(PORTC,PIN7,1);
		DIO_VidToggPinValue(PORTC,PIN0,1);
		DIO_VidToggPinValue(PORTC,PIN1,1);
		counter=0;
 }
}
//lm35 temprature sensor
void func_2(void)
{
		DIO_VidSetPinDirection(PORTC,PIN0,OUTPUT);
		DIO_VidSetPinDirection(PORTC,PIN7,OUTPUT);
		u16 Analog_value=0;
		Analog_value=(((ADC*5000UL)/1024)/10);
		LCD_GoToPosition(1,0);
		LCD_Write4String("tempruture= ",0,0);
		LCD_VidDisp4Number(Analog_value);
		DIO_VidToggPinValue(PORTC,PIN7,0);
		DIO_VidToggPinValue(PORTC,PIN0,0);
		//_delay_ms(1000);
		if(Analog_value>33)
		{

			DIO_VidToggPinValue(PORTC,PIN7,1);
			DIO_VidToggPinValue(PORTC,PIN0,1);
		}
}
//ldr sensor
void func_1(void)
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
