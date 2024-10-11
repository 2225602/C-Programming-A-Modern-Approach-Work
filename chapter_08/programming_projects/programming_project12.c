#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	int scrabble_value = 0;
	int scrabble_values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1,  
		8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4,
		8, 4, 10};
	char letter;

	printf("Enter a word: ");
	while ((letter = toupper(getchar())) != '\n') {
		int array_value = 25 - (90 - letter);
		if (array_value >= 0 && array_value <= 25) {
			scrabble_value += scrabble_values[array_value];
		} else continue;
	}

	printf("Scrabble value: %d\n", scrabble_value);

	return 0;
}
