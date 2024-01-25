#include <stdio.h>

int main(void)
{

	// Q. Show how to replace a continue statement by an equivalent
	// goto statement
	
	// A. The continue statement works by placing the current program
	// flow up to the end of the loop body. We can take advantage of this by 
	// labelling the end of the loop body and using it for our goto statement.
	
	// Program for printing only even numbers from 1 to 30
	
	printf("Using continue statement: ");
	for (int i = 1; i <= 30; i++) {
		if (i % 2 == 0) printf("%d ", i);
		else continue;
	}

	printf("\nUsing goto statement: ");
	for (int i = 1; i <= 30; i++) {
		if (i % 2 != 0) goto skipOdd;
		else printf("%d ", i);
		skipOdd: ;
	}
	printf("\n");

	return 0;
}
