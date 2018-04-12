/*
 * Exercise5.c
 *
 * Created: 4/10/2018 11:16:28 AM
 * Author : Talita
 */ 

#define F_CPU 10000000L
#include <avr/io.h>
#include <util/delay.h>

int led_no = 2;

void light_all_off();
int find_next_prime(int no);

int main(void) {
	DDRA = 0xff;            // setting all I/O's in port A as outputs
	light_all_off();
	
	while(led_no < 100) {
		PORTA = ~led_no;
		_delay_ms(5000);
		led_no = find_next_prime(++led_no);
		light_all_off;
	}
}

void light_all_off() {
	PORTA = 0xff;
}

int find_next_prime(int no) {
	int n = no;
	while(n <= 100) {
		int prime = 1;
		int i = 2;
		
		while(i <= sqrt(n)) {
			if(n % i == 0) {
				prime = 0;
			}
			i++;
		}
		
		if(prime) {
			return n;
		}
		n++;
	}
}

