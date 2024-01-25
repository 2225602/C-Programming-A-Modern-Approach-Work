#include <stdio.h>

int main(void)
{

	int two_digits, tens, ones;
	printf("Enter a two-digit number: ");
	scanf("%d", &two_digits);
	tens = two_digits / 10;
	ones = two_digits % 10;
	printf("The reversal is %d%d\n", ones, tens);


	return 0;
}
