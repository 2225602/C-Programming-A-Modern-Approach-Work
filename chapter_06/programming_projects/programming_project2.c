#include <stdio.h>

int main(void)
{

	int m, n, gcd;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	if (n == 0) {
		gcd = m;
	} else {
		do {
			int rem = m % n;
			m = n;
			n = rem;
		} while (n != 0);
		gcd = m;
	}

	printf("Greatest common divisor: %d\n", gcd);
	return 0;
}
