#include <stdio.h>

int  main(void)
{

	int x, x_2, x_3, x_4, x_5, answer;
	printf("Enter value for x: ");
	scanf("%d", &x);
	x_2 = x * x;
	x_3 = x_2 * x;
	x_4 = x_3 * x;
	x_5 = x_4 * x;
	answer = 3 * x_5 + 2 * x_4 - 5 * x_3 - x_2 + 7 * x - 6;


	printf("3(%d) + 2(%d) - 5(%d) - (%d) + 7(%d) - 6 = %d\n",
			x_5, x_4, x_3, x_2, x, answer);
	return 0;
}
