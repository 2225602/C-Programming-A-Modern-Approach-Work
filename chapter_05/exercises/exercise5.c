#include <stdio.h>

int main(void)
{

	// Q. Is the following statement legal?
	int n = 0;
	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");
	
	// A. The statement is technically legal, though
	// it doesn't mean what you might think it means.
	// The code will still print out the string even though
	// n's value isn't really between 1 and 10.
	
	return 0;

}
