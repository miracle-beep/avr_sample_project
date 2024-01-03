#include <avr/io.h>
#include <util/delay.h>
#include <kt10281dko.h>
#define F_CPU 1000000UL
#define KEY PORTB
#define SLEEPTIME 500
int main(void){
	DDRD = 0b11111111;
	DDRB = 0b00000000;
	DISPLAY = 0b00000000;
	KEY = 0b11111111;
	while(1){
		DISPLAY = 0xBF;
	}
}