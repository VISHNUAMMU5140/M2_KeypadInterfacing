
#include "project_config.h"
#include "user_utils.h"
#include "blinky.h"

void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1 << DDB0);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}

int main(void)
{
	
	peripheral_init();

	for(;;)
	{
        change_led_state(LED_ON); // switching LED state
		delay_ms(LED_ON_TIME);// calling the delay loop for on time 
		
        change_led_state(LED_OFF); // swirching LED state
		delay_ms(LED_OFF_TIME);	// calling the delay loop for off time 
	}
	return 0;
}