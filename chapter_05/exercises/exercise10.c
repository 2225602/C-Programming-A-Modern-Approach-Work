#include <stdio.h>

int main(void)
{

	// Q. What output does the following program fragment produce?
	int i = 1;
	switch (i % 3) {
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");

	}
	// A. The expression i % 3 evaluates to 1. This first
	// executes the statements assigned to case 1, but since
	// it doesn't have the break statement, the control
	// would continue to fall through the other case which is
	// case 2. Thus the program would print: "onetwo"
	printf("\n") ;
	return 0;
}
