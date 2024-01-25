#include <stdio.h>

int main(void)
{

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	// Q. Find the error in the following program fragment and fix it.
	/*
	if (n % 2 == 0) ;
		printf("n is even\n");
	*/

	// A. The obvious problem is that the if statement's body is
	// a null statement. We just need to remove it to fix the 
	// program. Better yet, we could surround the body with
	// curly braces just to follow the coding standard.

	if (n % 2 == 0) {
		;
		printf("n is even\n");
	}


	return 0;
}
