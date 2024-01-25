#include <stdio.h>

int main(void)
{

	int i;
	short s;
	long l;
	float f;
	double d;
	long double ld;

	printf("Size of int: %zd\n", sizeof(i));
	printf("Size of short: %zd\n", sizeof(s));
	printf("Size of long: %zd\n", sizeof(l));
	printf("Size of float: %zd\n", sizeof(f));
	printf("Size of double: %zd\n", sizeof(d));
	printf("Size of long double: %zd\n", sizeof(ld));

}
