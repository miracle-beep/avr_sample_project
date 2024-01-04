#define DISPLAY PORTD //Display port
#define CONTROL PORTB
#define SLEEPTIME 300
unsigned int digits[10] = {0x21,0xF5,0x13,0x91,0xC5,0x89,0x09,0xF1,0x01,0x81}; //0123456789
unsigned int charplaces[4] = {0x01,0x02,0x04,0x08};
void display_digit(unsigned int number, unsigned int charplace){
	charplace -=1;
	CONTROL = charplaces[charplace];
	DISPLAY = digits[number];
}
void clean_display(void){
	DISPLAY = 0;
}	
int letter_to_number(char symbol){
	char mask[22]="0123456789abcdefhijlno";
	for(int i=0; i<22; i++){
		if(mask[i]==symbol){
			return i;
		}
	}
}

/* void display_word(const char *word, unsigned int times){
	for(int ctr = 0;ctr<times;ctr++){
	for(int i=0;;i++){
		if(word[i]=='\0'){
			break ;
		}
		else{
			display_digit(letter_to_number(word[i]));
			_delay_ms(SLEEPTIME);
		}
	}
	}
	
} */



