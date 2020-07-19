/*
 * EXI_Interface.h
 *
 *  Created on: Jun 17, 2020
 *      Author: shafek
 */

#ifndef COTS_MCAL_EXI_EXI_INTERFACE_H_
#define COTS_MCAL_EXI_EXI_INTERFACE_H_



void EXI_Enable(ExInteruptSource LOC_Interupt);

void EXI_Disable(ExInteruptSource LOC_Interupt);

void EXI_TrigerEdge(ExInteruptSource LOC_Interupt,TriggerEdge_Type LOC_Edge);


#endif /* COTS_MCAL_EXI_EXI_INTERFACE_H_ */
