#include "port.h"
#include "delay.h"
#include "stm32f1xx_hal.h"

int BITMAP[10] = {
	0x00C0,
	0x00F9,
	0x00A4,
	0x00B0,
	0x0099,
	0x0092,
	0x0082,
	0x008F,
	0x0080,
	0x0090
};

void Led7Seg_Display(int value, int pin)
{
	// Reset all led pins
	HAL_GPIO_WritePin(LED7SEG_PORT, LED_PIN_1
			| LED_PIN_2
			| LED_PIN_3
			| LED_PIN_4
			| LED_PIN_5
			| LED_PIN_6
		, GPIO_PIN_RESET);

	// Show bitmap
	LED7SEG_PORT->ODR = BITMAP[value];

	// Set led pin
	switch (pin) {
		case 1:
			HAL_GPIO_WritePin(LED7SEG_PORT, LED_PIN_1, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED7SEG_PORT, LED_PIN_1, GPIO_PIN_SET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED7SEG_PORT, LED_PIN_1, GPIO_PIN_SET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED7SEG_PORT, LED_PIN_1, GPIO_PIN_SET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED7SEG_PORT, LED_PIN_1, GPIO_PIN_SET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED7SEG_PORT, LED_PIN_1, GPIO_PIN_SET);
			break;

	}
}

void Led7Seg_Display_Clock(int h1, int h2, int m1, int m2, int s1, int s2)
{
	Led7Seg_Display(s2, 6);
	SysTick_Delay(5);

	Led7Seg_Display(s1, 5);
	SysTick_Delay(5);

	Led7Seg_Display(m2, 4);
	SysTick_Delay(5);

	Led7Seg_Display(m1, 3);
	SysTick_Delay(5);

	Led7Seg_Display(h2, 2);
	SysTick_Delay(5);

	Led7Seg_Display(h1, 1);
	SysTick_Delay(5);
}
