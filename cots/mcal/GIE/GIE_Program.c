
#include "STD_TYPES.h"
#include "GIE_Register.h"
#include "BIT_MATH.h"

void GIE_Enable(void)

{
	SIT_BIT(SREG,INT0);
}

void GIE_Disable(void)
{
    CLR_BIT(SREG,INT0);
}

