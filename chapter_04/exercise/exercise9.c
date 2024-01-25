#include <stdio.h>

int main(void)
{
	int i, j, k;

	// (a)
	i = 7; j = 8;
	i *= j + 1;
	printf("%d %d\n", i, j);
	// i = 63
	// j = 8
	
	// (b)
	i = j = k = 1;
	i += j += k;
	printf("%d %d %d\n", i, j, k);
	// i = 3 
	// j = 2
	// k = 1
	

	// (c)
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d\n", i, j, k);
	// i = 2
	// j = -1
	// k = 3

	// (d)
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("%d %d %d\n", i, j, k);
	// i = 0
	// j = 0
	// k = 0

	return 0;
}
