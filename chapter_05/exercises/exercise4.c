#include <stdio.h>

int main(void)
{

	/*
	 * Write a single expression whose value is either -1,
	 * 0, or + 1, depending on whether i is less than, equal
	 * to, or greater than j respectively.
	 */

	int i, j;
	
	printf("Enter values for i and j: ");
	scanf("%d %d", &i, &j);
	printf("out: %d\n", i < j ? -1 : i == j ? 0 : 1);



	return 0;
}
