#include <stdio.h>

int main(void)
{

	/*
	 * Q. What output does the following for statement produce?
	 */
	for (int i = 5, j = i - 1; i > 0, j > 0; --i, j= i - 1)
		printf("%d ", i);

	/*
	 * A. It returns the following output:
	 * 5 4 3 2 
	 */

	return 0;
}
