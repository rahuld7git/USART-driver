// it.c (interrupt)
#include "it.h"
#include "stm32f4xx_hal.h"

void SysTick_Handler(void)
{
    HAL_IncTick();
    HAL_SYSTICK_IRQHandler();
}
