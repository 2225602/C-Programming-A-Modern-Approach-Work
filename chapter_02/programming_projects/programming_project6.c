#include <stdio.h>

int  main(void)
{

	int x, answer;
	printf("Enter value for x: ");
	scanf("%d", &x);
	answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;


	printf("3(%d)^5 + 2(%d)^4 - 5(%d)^3 - (%d)^2 + 7(%d) - 6 = %d\n",
			x, x, x, x, x, answer);
	return 0;
}
