
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "LCD_4BIT_Interface.h"
#include "UART_Regster.h"
#include "DIO_Interface.h"
#include "EXI_Regster.h"

static void  (*CallBackFuncPtr)(void)= NULL;


void  UART_VidSetCallBack (void (*LOCUART_funcptr)(void) )
{
	if(LOCUART_funcptr  != NULL )
	{
		CallBackFuncPtr = LOCUART_funcptr ;
	}
}
void UART_VidInit(void)
{
	u8 UCSRC_value=0;
	//UCSRB enable Tx and Rx
	SET_BIT(UCSRB,RXEN);
	SET_BIT(UCSRB,TXEN);
	//UCSRC active UCSRC and active 8 character size
	SET_BIT(UCSRC_value,URSEL);
	SET_BIT(UCSRC_value,UCSZ1);
	SET_BIT(UCSRC_value,UCSZ0);
	UCSRC=UCSRC_value;
	//

}

ISR(ADC_VECT)
{
	if(CallBackFuncPtr != NULL )
	{
		CallBackFuncPtr();
	}
}
