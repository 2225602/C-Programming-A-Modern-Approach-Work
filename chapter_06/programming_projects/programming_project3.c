#include <stdio.h>

int main(void)
{

	int orig_num, orig_denom, numerator, denominator, gcd;
	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);
	orig_num = numerator, orig_denom = denominator;


	if (denominator == 0) {
		gcd = numerator;
	} else {
		do {
			int rem = numerator % denominator;
			numerator = denominator;
			denominator = rem;
		} while (denominator != 0);
		gcd = numerator;
	}

	numerator = orig_num, denominator = orig_denom;

	printf("In lowest terms: %d/%d\n", numerator/gcd, denominator/gcd);
	return 0;
}
