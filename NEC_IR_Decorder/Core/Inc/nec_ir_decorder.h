/*
 * nec_ir_decorder.h
 *
 *  Created on: Nov 23, 2025
 *      Author: user
 */

#ifndef INC_NEC_IR_DECORDER_H_
#define INC_NEC_IR_DECORDER_H_



void Timer_capture_callback( GPIO_PinState state , uint32_t timestamp );    // callback for timer input capture event (IR signal both edge detected)
void Timer_period_callback( void );   // callback for period event


void IR_Decoder_Init( void );
uint16_t IR_Decoder_GetSignalIndex( void );
uint16_t IR_Decoder_GetSignalData( uint16_t index,GPIO_PinState *irstate,uint32_t *tim);

#endif /* INC_NEC_IR_DECORDER_H_ */
