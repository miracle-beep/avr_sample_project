#include <avr/io.h>
#include <util/delay.h>
#include <kt10281dko.h>
#define SLEEPTIME 1000
#define F_CPU 1000000UL
#define KEY PORTB
int main(void){
	DDRD = 0b11111111;
	DDRB = 0b00000000;
	DISPLAY = 0b00000000;
	KEY = 0b11111111;
	while(1){
		display_digit(letter_to_number('h'));
		_delay_ms(SLEEPTIME);
		clean_display();
		display_digit(letter_to_number('e'));
		_delay_ms(SLEEPTIME);
		clean_display();
		display_digit(letter_to_number('l'));
		_delay_ms(SLEEPTIME);
		clean_display();
		display_digit(letter_to_number('l'));
		_delay_ms(SLEEPTIME);
		clean_display();
		display_digit(letter_to_number('o'));
		_delay_ms(SLEEPTIME);
		clean_display();
		 }
	}