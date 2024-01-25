#include <stdio.h>

int main(void)
{

	// (a)
	int i = 5, j = 3;
	printf("%d %d\n", i / j, i % j);
	// i / j = 1
	// i % j = 2
	
	// (b)
	i = 2; j = 3;
	printf("%d\n", (i + 10) % j);
	// (i + 10) % j = 0

	// (c)
	i = 7; j = 8;
	int k = 9;
	printf("%d", (i + 10) % k / j);
	// (i + 10) % k / j = 1



	return 0;
}
