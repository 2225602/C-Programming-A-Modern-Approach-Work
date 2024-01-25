#include <stdio.h>

int main(void)
{
	// Q. What output does the following for statement produce?
	int i;
	for (i = 10; i >= 1; i /= 2)
		printf("%d ", i++);

	/*
	 * A. It returns the following sequence of numbers:
	 * 10 5 3 2 1 1 1 1...
	 * It continues on forever.
	 */
	return 0;
}
