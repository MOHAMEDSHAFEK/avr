/*
 * EXI_TYPE.h
 *
 *  Created on: Jun 17, 2020
 *      Author: shafek
 */

#ifndef COTS_MCAL_EXI_EXI_TYPE_H_
#define COTS_MCAL_EXI_EXI_TYPE_H_

#define ISC2 6

#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

#define INT1 7
#define INT0 6
#define INT2 5

#define INTF1 7
#define INTF0 6
#define INTF2 5


typedef enum {

	EX_INT0,
	EX_INT1,
	EX_INT2

}ExInteruptSource;

typedef enum {

	LOW_LVEL,
	ANY_LOGIC_EDGE,
	FALLING_EDGE,
	RISING_EDGE

}TriggerEdge_Type;


#define INT0_VECT     __vector_1
#define INT1_VECT     __vector_2
#define INT2_VECT     __vector_3

#define ISR(vector,...) \
	void vector(void)   __attribute__((signal)) __VA_ARGS__; \
	void vector(void)

#define sei() __asm__ __volatile__ ("sei" ::)
#endif /* COTS_MCAL_EXI_EXI_TYPE_H_ */
