#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c, initial;
	char last_name[20];
	int max_chars = 0;

	printf("Enter a first and last name: ");
	initial = getchar();

	while (getchar() != ' ') continue;

	for (; max_chars < 20 && (c = getchar()) != '\n'; max_chars++) {
		last_name[max_chars] = c;
	}	

	for (int i = 0; i < max_chars; i++) {
		putchar(last_name[i]);
	}

	printf(", %c.\n", initial);

	return 0;
}
