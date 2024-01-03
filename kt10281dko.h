#define DISPLAY PORTD //Display port
unsigned int numbers[10] = {0xDE,0x0A,0xEC,0x6E,0x3A,0x76,0xF6,0x0E,0xFE,0x7E}; //0123456789
unsigned int letters[6] = {0xBE, 0xF2, 0xD4, 0xEA, 0xF4, 0xB4}; //abcdef
void display_number(unsigned int number){
	DISPLAY = numbers[number];
}
void display_letter(unsigned int number){
	DISPLAY = letters[number];
}