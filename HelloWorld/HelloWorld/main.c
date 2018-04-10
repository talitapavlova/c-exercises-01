
#define F_CPU 10000000L
#include <avr/io.h>
#include <util/delay.h>

#define led_no = 3;


int main(void) {
    DDRA = 0xff;            // setting all I/O's in port A as outputs
	PORTA = 0xff;
	light_on(3);
    
}

void light_on(int light_no) {
	PORTA &= ~(1<<light_no);   
}

void light_off(int light_no) {
	PORTA |= ~(1<<light_no); 
}
