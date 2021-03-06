

#ifndef COTS_MCAL_EXI_EXI_REGSTER_H_
#define COTS_MCAL_EXI_EXI_REGSTER_H_

#define INT1_VECT     __vector_2
#define INT2_VECT     __vector_3
#define ADC_VECT     __vector_16
#define TIMER0_OV     __vector_11
#define TIMER_CTC_VECT     __vector_10

#define ISR(vector,...) \
	void vector(void)   __attribute__((signal)) __VA_ARGS__; \
	void vector(void)

#define INT0 6



#define  SREG	*((volatile unsigned char*)0x5F)

#endif /* COTS_MCAL_EXI_EXI_REGSTER_H_ */
