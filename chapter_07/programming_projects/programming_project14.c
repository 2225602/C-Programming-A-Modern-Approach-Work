#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y = 1.0L, old_y, sqrt;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	do {
		sqrt = (y + (x/y)) / 2;
		old_y = y;
		y = sqrt;
	} while (fabs(old_y - y) > .00001 * y); 

	printf("Square root: %.5f\n", sqrt);

	return 0;
}
