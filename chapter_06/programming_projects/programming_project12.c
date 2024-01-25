#include <stdio.h>

int main(void)
{

	double n, e = 0;
	printf("Enter an approximation term limit: ");
	scanf("%lf", &n);

	float current_term = 1; 
	for (int i = 0; current_term >= n; i++) {
		int factorial_n = 1;
		for (int j = 1; j <= i; j++) {
			factorial_n *= j;
		}
		current_term = 1.0 / factorial_n;
		e += current_term;
	}
	printf("Approximate value of e: %f\n", e);
	return 0;
}
