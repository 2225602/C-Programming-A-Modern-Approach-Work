#include <stdio.h>
#include <stdlib.h>

void get_data(int*, int*);
int main(void)
{
	int total_letter_count = 0, word_count = 0;
	float mean_word_length;

	printf("Enter a sentence: ");
	get_data(&total_letter_count, &word_count);
	mean_word_length = ((float) total_letter_count) / word_count;
	printf("Average word length: %.1f\n", mean_word_length);

	return 0;
}

void get_data(int *total_letter_count, int *word_count){
	char c;
	while ((c = getchar()) != '\n') {
		if (c == ' ') {
			*word_count += 1;
		} else {
			*total_letter_count += 1;
		}
	}
	*word_count += 1;
}
