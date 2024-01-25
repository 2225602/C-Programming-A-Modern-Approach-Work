#include <stdio.h>

int main(void)
{

	int n;
	double e = 1.0;
	printf("Enter an integer input: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int factorial_n = 1;
		for (int j = 1; j <= i; j++) {
			factorial_n *= j;
		}
		e += 1.0 / factorial_n;
	}
	printf("Approximate value of e: %f\n", e);
	return 0;
}
