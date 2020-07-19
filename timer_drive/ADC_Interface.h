

#ifndef COTS_MCAL_ADC_ADC_INTERFACE_H_
#define COTS_MCAL_ADC_ADC_INTERFACE_H_


void ADC_VidInit(void);

u16 ADC_U16GitDigital(u8 LOC_Channel);

void ADC_VidStartConvertion(u8  LOC_Channel);

void ADC_VidEnableInt(void);
void  ADC_VidSetCallBack (void (*LOC_funcptr)(void) );


#endif /* COTS_MCAL_ADC_ADC_INTERFACE_H_ */
