
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "LCD_4BIT_Interface.h"
#include "ADC_Regster.h"
#include "DIO_Interface.h"
#include "EXI_Regster.h"

static void  (*CallBackFuncPtr)(void)= NULL;


void  ADC_VidSetCallBack (void (*LOC_funcptr)(void) )
{
	if(LOC_funcptr  != NULL )
	{
		CallBackFuncPtr = LOC_funcptr ;
	}
}


void ADC_VidInit(void)
{
#if Voltage_Reference__mode== Voltage_Reference_off
	CLR_BIT(ADMUX,REFS0);
	CLR_BIT(ADMUX,REFS1);              //V reference

#elif  Voltage_Reference__mode== Voltage_Reference_vcc
	SET_BIT(ADMUX,REFS0);
	CLR_BIT(ADMUX,REFS1);              //V reference
#elif  Voltage_Reference__mode== Voltage_Reference_Reserved
	CLR_BIT(ADMUX,REFS0);
	SET_BIT(ADMUX,REFS1);              //V reference
#elif  Voltage_Reference__mode== Voltage_Reference_2
	SET_BIT(ADMUX,REFS0);
	SET_BIT(ADMUX,REFS1);              //V reference
#endif

#if	ADC_Right_Adjust== enable
		CLR_BIT(ADMUX,ADLAR);
#elif ADC_Left_Adjust== disable
		SET_BIT(ADMUX,ADLAR);
#else
	#error  "wrong choice"
#endif

//CLOCK SELECT PRESCALER
	#if	prescaler_mode== prescaler_2
		SET_BIT(ADCSRA,ADPS0);
		CLR_BIT(ADCSRA,ADPS1);
		CLR_BIT(ADCSRA,ADPS2);	         //Prescaler
#elif prescaler_mode== prescaler_4
	CLR_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	CLR_BIT(ADCSRA,ADPS2);	         //Prescaler
#elif prescaler_mode== prescaler_8
	SET_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	CLR_BIT(ADCSRA,ADPS2);	         //Prescaler
	#elif prescaler_mode== prescaler_16
		CLR_BIT(ADCSRA,ADPS0);
		CLR_BIT(ADCSRA,ADPS1);
		SET_BIT(ADCSRA,ADPS2);	         //Prescaler
#elif prescaler_mode== prescaler_32
			SET_BIT(ADCSRA,ADPS0);
			CLR_BIT(ADCSRA,ADPS1);
			SET_BIT(ADCSRA,ADPS2);	         //Prescaler
	#elif prescaler_mode== prescaler_64
			SET_BIT(ADCSRA,ADPS2);
			SET_BIT(ADCSRA,ADPS1);
			CLR_BIT(ADCSRA,ADPS0);	         //Prescaler
	#elif prescaler_mode== prescaler_128
			SET_BIT(ADCSRA,ADPS0);
			SET_BIT(ADCSRA,ADPS1);
			SET_BIT(ADCSRA,ADPS2);	         //Prescaler
	#else
		#error  "wrong choice"
	#endif


#if Auto_Trigger_Source_Selections==Free_Running_mode
			CLR_BIT(SFIOR,ADTS0);
			CLR_BIT(SFIOR,ADTS1);
			CLR_BIT(SFIOR,ADTS2);
#elif Auto_Trigger_Source_Selections==Analog_Comparator
			SET_BIT(SFIOR,ADTS0);
			CLR_BIT(SFIOR,ADTS1);
			CLR_BIT(SFIOR,ADTS2);
#elif Auto_Trigger_Source_Selections==External_Interrupt_Request_0
			CLR_BIT(SFIOR,ADTS0);
			SET_BIT(SFIOR,ADTS1);
			CLR_BIT(SFIOR,ADTS2);
#elif Auto_Trigger_Source_Selections==Timer_Counter0_Compare_Match
			SET_BIT(SFIOR,ADTS0);
			SET_BIT(SFIOR,ADTS1);
			CLR_BIT(SFIOR,ADTS2);
#elif Auto_Trigger_Source_Selections==Timer_Counter0_Overflow
			CLR_BIT(SFIOR,ADTS0);
			CLR_BIT(SFIOR,ADTS1);
			SET_BIT(SFIOR,ADTS2);
#elif Auto_Trigger_Source_Selections==Timer_Counter_Compare_Match_B
			SET_BIT(SFIOR,ADTS0);
			CLR_BIT(SFIOR,ADTS1);
			SET_BIT(SFIOR,ADTS2);
#elif Auto_Trigger_Source_Selections==Timer_Counter1_Overflow
			CLR_BIT(SFIOR,ADTS0);
			SET_BIT(SFIOR,ADTS1);
			SET_BIT(SFIOR,ADTS2);
#elif Auto_Trigger_Source_Selections==Timer_Counter1_Capture_Event
			SET_BIT(SFIOR,ADTS0);
			SET_BIT(SFIOR,ADTS1);
			SET_BIT(SFIOR,ADTS2);
#else
	#error  "wrong choice"
#endif

#if	Auto_trigger== enable
			SET_BIT(ADCSRA,ADATE);
#elif Auto_trigger== disable
			CLR_BIT(ADCSRA,ADATE);
#else
	#error  "wrong choice Auto_trigger"
#endif


#if	ADC_TRIGGER== enable
			SET_BIT(ADCSRA,ADEN);
#elif ADC_TRIGGER== disable
			CLR_BIT(ADCSRA,ADEN);
#else
	#error  "wrong choice Auto_trigger"
#endif

}

u16 ADC_U16GitDigital(u8 LOC_Channel)
{
	ADMUX&=singel_ended;
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
	ADMUX&=singel_ended;               //singel ended
	ADMUX|=LOC_Channel;              //number of channel by user

	//SET_BIT(ADCSRA,ADIE);              //enable intruppt

	SET_BIT(ADCSRA,ADSC);           //Start Conversion
}

void ADC_VidEnableInt(void)
	{
		SET_BIT(ADCSRA,ADIE);              //enable intruppt
	}

ISR(ADC_VECT)
{
	if(CallBackFuncPtr != NULL )
	{
		CallBackFuncPtr();
	}
/*
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
	}*/
}
