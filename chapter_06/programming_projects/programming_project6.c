#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("All even squares between 1 to %d:\n", n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j * j == i && i % 2 == 0) {
				printf("%d\n", i);
			} 
		}
	}

	return 0;
}
