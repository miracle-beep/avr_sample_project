#define DISPLAY PORTD //Display port
unsigned int digits[22] = {0xDE,0x0A,0xEC,0x6E,0x3A,0x76,0xF6,0x0E,0xFE,0x7E, 0xBE, 0xF2, 0xD4, 0xEA, 0xF4, 0xB4,0xBA,0x90,0x4A,0xD0,0xA2,0xE2}; //0123456789abcdefhijlno
void display_digit(unsigned int number){
	DISPLAY = digits[number];
}
void clean_display(){
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



