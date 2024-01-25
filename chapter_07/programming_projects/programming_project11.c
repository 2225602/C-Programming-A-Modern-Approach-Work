#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c, initial;

	printf("Enter a first and last name: ");
	initial = getchar();

	while (getchar() != ' ') continue;

	while ((c = getchar()) != '\n') {
		putchar(c);
	}
	printf(", %c.\n", initial);

	return 0;
}
