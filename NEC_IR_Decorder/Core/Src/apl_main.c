/*
 * apl_main.c
 *
 *  Created on: Nov 23, 2025
 *      Author: user
 */

 #include "main.h"
 #include "nec_ir_decorder.h"

extern TIM_HandleTypeDef htim2;


/// @brief HAL TIM Period Elapsed Callback
/// @param htim 
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  if(htim == &htim2)
  {
      timer_period_elapsed_callback();
  }
}

/// @brief HAL TIM Input Capture Callback
/// @param htim 
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{
  if(htim == &htim2)
  {
      timer_capture_callback();
  }
}

void apl_main( void )
{
  HAL_TIM_Base_Init(&htim2);
  HAL_TIM_IC_Init(&htim2);
  HAL_TIM_IC_Start_IT(&htim2, TIM_CHANNEL_1); 
  while(1)  {

  } 
}