#include <stdio.h>

int main(void)
{
	int n = 5;

	// Q. Is the following statement legal?
	if (n == 1-10)
		printf("n is between 1 and 10\n");
	
	// A. This code is also legal. The value of n, which is
	// 5, is compared to 1-10 which is -9. The expression
	// n == 1-10 evaluates to false thus the program will
	// not print the string.

	return 0;
}
