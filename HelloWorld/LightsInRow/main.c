/*
 * LightsInRow.c
 *
 * Created: 4/10/2018 11:06:10 AM
 * Author : Talita
 */ 

#define F_CPU 10000000L
#include <avr/io.h>
#include <util/delay.h>

int led_no = 0;

void light_on(int light_no);
void light_off(int light_no);
void light_all_off();

int main(void) {
	DDRA = 0xff;            // setting all I/O's in port A as outputs
	light_all_off();
	
	while(led_no < 8) {
		light_on(led_no);
		light_off(led_no);
		led_no++;
	}
}

void light_on(int light_no) {
	PORTA &= ~(1<<light_no);
	_delay_ms(1000);
}

void light_off(int light_no) {
	PORTA |= 1<<light_no;
}

void light_all_off() {
	PORTA = 0xff;
}
