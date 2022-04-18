#ifndef __BLINKY_H_
#define __BLINKY_H_
#define LED_ON 	(0x01)			
#define LED_OFF	(0x00)			
#define LED_ON_TIME     (1000)  
#define LED_OFF_TIME    (500)   
#include <avr/io.h>

void change_led_state(uint8_t state);


#endif /** __BLINKY_H_ */