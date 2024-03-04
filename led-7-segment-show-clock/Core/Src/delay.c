#include "delay.h"
#include "stm32f1xx_hal.h"

void Delay(unsigned int miliseconds)
{
	for (int i = 0; i < miliseconds; i++)
		for (int j = 0; j < 120*13*5; j++);
}

void SysTick_Delay(unsigned int miliseconds)
{
	SysTick->LOAD = (SYSTEM_CLOCK / 1000) * miliseconds;
	SysTick->VAL = 0;
	SysTick->CTRL = 5;
	while((SysTick->CTRL && 1<<16) == 0);
}

void SysTick_Delay_us(unsigned int microseconds)
{
	SysTick->LOAD = (SYSTEM_CLOCK / 1000000) * (microseconds -1);
	SysTick->VAL = 0;
	SysTick->CTRL = 5;
	while((SysTick->CTRL && 1<<16) == 0);
}
