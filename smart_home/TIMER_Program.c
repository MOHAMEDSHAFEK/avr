
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "TIMER_Regster.h"
#include "EXI_Regster.h"
#include "DIO_Interface.h"

static void  (*CallBackFuncPtr)(void)= NULL;

void  TIMER_VidSetCallBack (void (*LOC_funcptr)(void) )
{
	if(LOC_funcptr  != NULL )
	{
		CallBackFuncPtr = LOC_funcptr ;
	}
}

void TIMER_VidEnable(void)
{
	//SELECT MODE
#if	type_of__mode== Normal_mode
	CLR_BIT(TCCR0,WGM00);
	CLR_BIT(TCCR0,WGM01);
#elif type_of__mode== PWM_Phasw_correct_Mode
	SET_BIT(TCCR0,WGM00);
	CLR_BIT(TCCR0,WGM01);
#elif type_of__mode== CTC_Mode
	CLR_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
#elif type_of__mode== Fast_PWM_Mode
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
#else
	#error  "wrong choice"
#endif

	//CLOCK SELECT PRESCALER
#if	prescaler_mode== prescaler_0
	SET_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS02);
#elif prescaler_mode== prescaler_8
		CLR_BIT(TCCR0,CS00);
		SET_BIT(TCCR0,CS01);
		CLR_BIT(TCCR0,CS02);
#elif prescaler_mode== prescaler_64
		SET_BIT(TCCR0,CS00);
		SET_BIT(TCCR0,CS01);
		CLR_BIT(TCCR0,CS02);
#elif prescaler_mode== prescaler_256
	CLR_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02);
#elif prescaler_mode== prescaler_1024
		SET_BIT(TCCR0,CS00);
		CLR_BIT(TCCR0,CS01);
		SET_BIT(TCCR0,CS02);
#else
	#error  "wrong choice"
#endif

	//ENABLE INTRRUPT OVERFLOW
#if	interrupt_overflow_enabled== enable
		SET_BIT(TIMSK,TOIEO);
#elif interrupt_overflow_enabled== disable
		CLR_BIT(TIMSK,TOIEO);
#else
	#error  "wrong choice"
#endif

#if	interrupt_Compare_Match_enabled== enable
		SET_BIT(TIMSK,OCIE0);
#elif interrupt_Compare_Match_enabled== disable
		CLR_BIT(TIMSK,OCIE0);
#else
	#error  "wrong choice"
#endif



	TCNT0=238;
}
void Tim_Count0_VidCounterReg(u8 Loc_u8TCNTvalue)
{
	TCNT0=Loc_u8TCNTvalue;
}
void Tim_Count0_VidCompareReg(u8 Loc_u8OCRvalue)
{
	OCR0=Loc_u8OCRvalue;
}

ISR(TIMER_VECT)
{
	if(CallBackFuncPtr != NULL )
	{
		CallBackFuncPtr();
	}
 }
