#include <stdio.h>

int check(int, int, int);

int main(void)
{
	printf("Check (1, 2, 3): %d\n", check(1, 2, 3));

	printf("Check (2, 3, 4): %d\n", check(2, 3, 4));
	printf("Check (5, 0, 1): %d\n", check(5, 0, 1));
	return 0;
}

int check(int x, int y, int n) 
{
	return ((x >= 0 && x <= (n - 1))
			&&
		(y >= 0 && y <= (n - 1)));
}
