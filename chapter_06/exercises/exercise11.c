#include <stdio.h>

int main(void)
{
	// Q. What output does the following program fragment produce?
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		if (i % 2)
			continue;
		sum += i;
	}

	printf("%d\n", sum);

	// A. It produces the following:
	// 20

	return 0;
}
