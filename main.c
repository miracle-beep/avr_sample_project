#include <avr/io.h>
#include <util/delay.h>
#include <ca04-41ewa.h>
#define F_CPU 1000000UL
#define SLEEPTIME 300
#define INPUT PORTC
int main(void){
	DDRD = 0b11111111;
	DDRB = 0b11111111;
	DDRC = 0b00000000;
	DISPLAY = 0b00000000;
	CONTROL = 0b00000000;
	INPUT = 0b00000001;
	while(1){
		if(0==(PINC & (1<<0))){
		display_digit(1,1);
		_delay_ms(SLEEPTIME);
		display_digit(2,2);
		_delay_ms(SLEEPTIME);
		display_digit(3,3);
		_delay_ms(SLEEPTIME);
		display_digit(4,4);
		_delay_ms(SLEEPTIME);
		 }
		 else{
		 display_digit(9,4);
		_delay_ms(SLEEPTIME);
		display_digit(8,3);
		_delay_ms(SLEEPTIME);
		display_digit(7,2);
		_delay_ms(SLEEPTIME);
		display_digit(6,1);
		_delay_ms(SLEEPTIME); 
		 }
	}
}