#include "keypad.h"
#include "port.h"
#include "stm32f1xx_hal.h"

int Read_Keypad(void)
{
	int key = 255;

	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H1_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H2_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H3_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H4_PIN, GPIO_PIN_SET);

	if (KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0);
		  key = 0;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0);
		  key = 1;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0);
		  key = 2;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0);
		  key = 3;
	  }
	}

	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H1_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H2_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H3_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H4_PIN, GPIO_PIN_SET);

	if (KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0);
		  key = 4;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0);
		  key = 5;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0);
		  key = 6;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0);
		  key = 7;
	  }
	}

	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H1_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H2_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H3_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H4_PIN, GPIO_PIN_SET);

	if (KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0);
		  key = 8;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0);
		  key = 9;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0);
		  key = 10;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0);
		  key = 11;
	  }
	}

	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H1_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H2_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H3_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(KEYPAD_PORT, KEYPAD_H4_PIN, GPIO_PIN_RESET);

	if (KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C1_PIN == 0);
		  key = 12;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C2_PIN == 0);
		  key = 13;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C3_PIN == 0);
		  key = 14;
	  }
	}

	if (KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0)
	{
	  HAL_Delay(20);
	  if (KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0)
	  {
		  while(KEYPAD_PORT->IDR & KEYPAD_C4_PIN == 0);
		  key = 15;
	  }
	}

	return key;
}
