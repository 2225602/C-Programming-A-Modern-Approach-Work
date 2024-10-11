#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_CHARS 15

int main(void)
{

	char key_letter;
	char phone_number[MAX_CHARS];
	int max_count = 0;

	printf("Enter a phone number: ");
	for (int i = 0; i < MAX_CHARS; i++, max_count = i) {
		key_letter = toupper(getchar()); 
		if (key_letter == '\n') break;
		switch(key_letter) {
			case 'A': case 'B': case 'C':
				phone_number[i] = '2';
				break;
			case 'D': case 'E': case 'F':
				phone_number[i] = '3';
				break;
			case 'G': case 'H': case 'I':
				phone_number[i] = '4';
				break;
			case 'J': case 'K': case 'L':
				phone_number[i] = '5';
				break;
			case 'M': case 'N': case 'O':
				phone_number[i] = '6';
				break;
			case 'P': case 'R': case 'S':
				phone_number[i] = '7';
				break;
			case 'T': case 'U': case 'V':
				phone_number[i] = '8';
				break;
			case 'W': case 'X': case 'Y':
				phone_number[i] = '9';
				break;
			default:
				phone_number[i] = key_letter;
		}
	}


	for (int i = 0; i < max_count; i++) {
		putchar(phone_number[i]);
	}
	
	putchar('\n');

	return 0;
}
