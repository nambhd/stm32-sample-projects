#ifndef __PORT_H
#define __PORT_H

#ifdef __cplusplus
	extern "C" {
#endif

#define LED7SEG_PORT GPIOA
#define KEYPAD_PORT GPIOB

#define KEYPAD_C1_PIN GPIO_PIN_0
#define KEYPAD_C2_PIN GPIO_PIN_1
#define KEYPAD_C3_PIN GPIO_PIN_2
#define KEYPAD_C4_PIN GPIO_PIN_3

#define KEYPAD_H1_PIN GPIO_PIN_4
#define KEYPAD_H2_PIN GPIO_PIN_5
#define KEYPAD_H3_PIN GPIO_PIN_6
#define KEYPAD_H4_PIN GPIO_PIN_7

#define LED7SEG_DIGIT_1 0x0100
#define LED7SEG_DIGIT_2 0x0200
#define LED7SEG_DIGIT_3 0x0300
#define LED7SEG_DIGIT_4 0x0400
#define LED7SEG_DIGIT_5 0x0500
#define LED7SEG_DIGIT_6 0x0600

#ifdef __cplusplus
}
#endif

#endif
