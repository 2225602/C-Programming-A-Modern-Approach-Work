#include <stdio.h>
#include <stdbool.h>

int main(void)
{

	int n;
	bool isPrime = true;
	printf("Enter a number to check if it is prime: ");
	scanf("%d", &n);

	if (n <= 1) isPrime = false;
	else for (int d = 2; d * d <= n; d++) {
		if (n % d == 0) {
			isPrime = false;
			break;
		}
	}

	if (isPrime) {
		printf("%d is prime.\n", n);
	} else {
		printf("%d is not prime.\n", n);
	}

	return 0;
}
