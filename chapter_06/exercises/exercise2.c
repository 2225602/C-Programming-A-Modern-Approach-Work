#include <stdio.h>

int main(void)
{


	/*
	 * Q. What output does the following program fragment produce?
	 */

	int i = 9384;
	do {
		printf("%d ", i);
		i /= 10;
	} while (i > 0);

	/*
	 * A. It returns the following output:
	 * 9384 938 93 9 
	 */
	return 0;
}
