#ifndef __BLINKY_H_
#define __BLINKY_H_
#define LED_ON 	(0x01)			// assigning value for LED ON
#define LED_OFF	(0x00)			// assigning value for LED OFF
#define LED_ON_TIME     (1000)  // ON time set as 1000 ms
#define LED_OFF_TIME    (500)   // OFF time set as 500 ms
#include <avr/io.h>

void change_led_state(uint8_t state); // defining the state of LED


#endif /** __BLINKY_H_ */