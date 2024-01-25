#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	char c;
	int vowel_count = 0;

	printf("Enter a sentence: ");
	while ((c = toupper(getchar())) != '\n') {

		switch(c) {
			case 'A': case 'E': case 'I': case 'O':
			case 'U':
				vowel_count += 1;
				break;
			default:
				continue;

		}
	}

	printf("Your sentence contains %d vowels.\n", vowel_count);

	return 0;

}	
