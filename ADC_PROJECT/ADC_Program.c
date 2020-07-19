
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "LCD_4BIT_Interface.h"
#include "ADC_Regster.h"
#include "DIO_Interface.h"
#include "EXI_Regster.h"

/*
 #define  REFS1 7
#define  REFS0 6
#define  ADLAR 5

#define  ADTS2 2
#define  ADTS1 1
#define  ADTS0 0
 *
 */
static void ((*GPFunction)(void))= NULL;
void ADC_VidInit(void)
{
	SET_BIT(ADMUX,REFS0);
	CLR_BIT(ADMUX,REFS1);              //V reference

	CLR_BIT(ADMUX,ADLAR);             //right adjast

	SET_BIT(ADCSRA,ADTS2);
	SET_BIT(ADCSRA,ADTS1);
	CLR_BIT(ADCSRA,ADTS0);	         //Prescaler

	CLR_BIT(SFIOR,ADTS0);
	CLR_BIT(SFIOR,ADTS1);
	CLR_BIT(SFIOR,ADTS2);               //Free Running mode
	
	//CLR_BIT(ADCSRA,ADIE);	           //disable  intrrupt

	SET_BIT(ADCSRA,ADATE);         //enable auto triger*/

	SET_BIT(ADCSRA,ADEN);            //enable ADC when it's running in the initialization it's will running in sleep mode

	
}

u16 ADC_U16GitDigital(u8 LOC_Channel)
{
	ADMUX&=0b11100000;               //singel ended
	ADMUX|=LOC_Channel;              //number of channel by user

	SET_BIT(ADCSRA,ADSC);           //Start Conversion
	while(0==GET_BIT(ADCSRA,ADIF))  //if ADC interrupt flag=0 waite until be one
	{
	}
	SET_BIT(ADCSRA,ADIF);           //reset the interrupt flag over write one to be zero
    return ADC;

}


void ADC_VidStartConvertion(u8  LOC_Channel)
{
	ADMUX&=0b11100000;               //singel ended
	ADMUX|=LOC_Channel;              //number of channel by user

	//SET_BIT(ADCSRA,ADIE);              //enable intruppt

	SET_BIT(ADCSRA,ADSC);           //Start Conversion

}
//enable intruppt FUNCTION
void ADC_VidEnableInt(void)
{
	SET_BIT(ADCSRA,ADIE);              //enable intruppt
	}

void ADC_SetCallBackF(void (*LocCALLFUNC)(void))
{
	if (LocCALLFUNC!=NULL)
	{
		GPFunction=LocCALLFUNC;

	}

}

ISR(ADC_VECT)
{
	if (GPFunction!=NULL)
	{
		GPFunction();
	}
}

ISR(ADC_VECT)
{

	DIO_VidSetPinValue(PORTB,PIN7,0);
	DIO_VidSetPinValue(PORTB,PIN1,0);
	DIO_VidSetPinValue(PORTB,PIN0,0);

	u16 Analog_value=0;
	Analog_value=((ADC*5000UL)/1024);
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
}
