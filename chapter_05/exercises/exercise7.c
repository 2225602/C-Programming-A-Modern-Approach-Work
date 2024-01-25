#include <stdio.h>

int main(void)
{

	int i;
	// Q. What does the following statement print?
	i = 17;
	printf("%d\n", i >= 0 ? i : -1);
	// A. This one prints 17.

	i = -17;
	printf("%d\n", i >= 0 ? i : -1);
	// A. This one prints -1.

	return 0;
}
