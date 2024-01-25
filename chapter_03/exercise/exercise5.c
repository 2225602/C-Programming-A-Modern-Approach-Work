#include <stdio.h>

int main(void)
{

	float x, y;
	int i;
	scanf("%f%d%f", &x, &i, &y);

	printf("x = %f, i = %d, y = %f\n", x, i, y);

	return 0;
}

// What will be the values of x, i, and y if the user inputs:
// 12.3 45.6 789
//
// -> x = 12.3
// -> i = 45
// -> y = .6
//
