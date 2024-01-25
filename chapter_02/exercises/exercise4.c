#include <stdio.h>

int main(void)
{

	int a, b, c;
	float x, y, z;

	printf("Values for ints a, b, c:\n%d %d %d\n", a, b, c);
	printf("Values for floats x, y, z:\n%f %f %f\n", x, y, z);

	return 0;
}

// The values for the uninitialized int and float variables
// are completely random. There is no pattern present when
// their values are shown on standard output.
