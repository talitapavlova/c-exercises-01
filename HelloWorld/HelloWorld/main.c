
#define F_CPU 10000000L
#include <avr/io.h>
#include <util/delay.h>

int led_no = 3;
int light_state = 0;

void light_on(int light_no);
void light_off(int light_no);

int main(void) {
    DDRA = 0xff;            // setting all I/O's in port A as outputs
	PORTA = 0xff;
	
	while(1) {
		if(!light_state) {
			light_on(led_no);
			light_state = 1;
		}
		else {
			light_off(led_no);
			light_state = 0;
		}
	}
}

void light_on(int light_no) {
	PORTA &= ~(1<<light_no);
	_delay_ms(500);
}

void light_off(int light_no) {
	PORTA |= 1<<light_no; 
	_delay_ms(500);
}
