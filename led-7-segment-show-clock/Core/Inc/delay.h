#ifndef __DELAY_H
#define __DELAY_H

#ifdef __cplusplus
extern "C" {
#endif

#define SYSTEM_CLOCK	8000000

void Delay(unsigned int miliseconds);

void SysTick_Delay(unsigned int miliseconds);

void SysTick_Delay_us(unsigned int microseconds);

#ifdef __cplusplus
}
#endif
#endif
