/* Prints a tablel of squares using a for statement */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar();

	for (i = 1; i <= n; i++)  {
		printf("%10d%10d\n", i, i * i);
		if (i % 24 == 0) {
			printf("Press Enter to continue...");
			getchar();
			printf("\n");
		}
	}
	return 0;
}
