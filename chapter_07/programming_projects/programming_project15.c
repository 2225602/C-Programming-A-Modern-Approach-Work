#include <stdio.h>

int main(void) {
	short factorial = 1, input;
	printf("Enter a positive integer: ");
	scanf("%hd", &input);

	for (short i = input; i > 0; i--) {
		factorial *= i;
	}

	printf("Factorial of %hd: %hd\n", input, factorial);

}
