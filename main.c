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
		unsigned int ctr = 0;
		unsigned int ctr_let = 0;
		 if(PINB == 0b11111111){
		 for(ctr;ctr<10;ctr++){
			 display_number(ctr);
			 _delay_ms(SLEEPTIME);
		 }
	 }
		 else{
		 for(ctr_let; ctr_let<7;ctr_let++){
			 display_letter(ctr_let);
			 _delay_ms(SLEEPTIME);
		 }
		 }
	}
}