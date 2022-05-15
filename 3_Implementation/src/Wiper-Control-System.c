#include <stdio.h>
#include <stdint.h>
#include "Wiper-Control-System.h"
#include "stm32f4xx_hal.h"

void Init_OnBoard(void);
void Delay_sec(volatile int time_sec);
int main(void)
{
	Init_OnBoard();
  static int Sw_Count=0;     
	while(1)
	{
  if(Sw_Count==1) 
  {
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
  Delay_sec(10000);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
  Delay_sec(10000);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
  Delay_sec(10000);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
  Delay_sec(10000);
  }
  if(Sw_Count==2) 
  {
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
  Delay_sec(2500);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
  Delay_sec(2500);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
  Delay_sec(2500);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
  Delay_sec(2500); 
  }
  if(Sw_Count==3) 
  {
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
  Delay_sec(1250);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
  Delay_sec(1250);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
  Delay_sec(1250);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
  Delay_sec(1250); 
}
}
}
void Init_OnBoard(void)
{
	 __HAL_RCC_GPIOD_CLK_ENABLE();
	GPIO_InitTypeDef LEDs;
	LEDs.Mode = GPIO_MODE_OUTPUT_PP;
	LEDs.Pin = GPIO_PIN_14;
  LEDs.Pin = GPIO_PIN_15;
  LEDs.Pin = GPIO_PIN_12;
  LEDs.Pin = GPIO_PIN_13;
	HAL_GPIO_Init(GPIOD, &LEDs);
}
void Delay_sec(volatile int time_sec)
{
	      int j;
        for(j = 0; j < time_sec*5000; j++)
            {};
}
