#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts[26]);

int main(void)
{
	int first_word[26] = {0};
       	int second_word[26] = {0};

	printf("Enter first word: ");
	read_word(first_word);
	printf("Enter second word: ");
	read_word(second_word);


	if (equal_array(first_word, second_word)) {
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}

}

void read_word(int counts[26])
{
	char read_char;
	while ((read_char = toupper(getchar())) != '\n') {
		int letter_pos = 26 - (90 - read_char);
		counts[letter_pos - 1]++;
	}

	return;
}


bool equal_array(int counts1[26], int counts2[26])
{
	for (int i = 0; i < 26; i++) {
		if (counts1[i] != counts2[i]) {
			return false;
		} else continue;
	}
	return true;
}
