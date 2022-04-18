#include "project_configuration.h"
#include "user_utilities.h"
#include "LEDBlink.h"
 void peripheral_init ()
{
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
        change_led_state(LED_ON);
		delay_ms(LED_ON_TIME);
		
        change_led_state(LED_OFF);
		delay_ms(LED_OFF_TIME);	
	}
	return 0;
}