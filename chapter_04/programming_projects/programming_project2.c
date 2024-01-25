#include <stdio.h>

int main(void)
{

	int three_digits, ones, tens, hundreds;
	printf("Enter a three-digit number: ");
	scanf("%d", &three_digits);

	hundreds = three_digits / 100;
	three_digits -= hundreds * 100;
	tens = three_digits / 10;
	ones = three_digits % 10;
	
	printf("The reversal is: %d%d%d\n", ones, tens, hundreds);

	return 0;
}
