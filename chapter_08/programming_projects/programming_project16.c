#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int first_word[26] = {0};
       	int second_word[26] = {0};
	char read_char;

	printf("Enter first word: ");

	while ((read_char = toupper(getchar())) != '\n') {
		int letter_pos = 26 - (90 - read_char);
		first_word[letter_pos - 1]++;
	}

	printf("Enter second word: ");
	while ((read_char = toupper(getchar())) != '\n') {
		int letter_pos = 26 - (90 - read_char);
		second_word[letter_pos - 1]++;
	}

	for (int i = 0; i < 26; i++) {
		if (first_word[i] != second_word[i]) {
			printf("The words are not anagrams.\n");
			return 0;
		} else continue;
	}

	printf("The words are anagrams.\n");
	return 0;
}
