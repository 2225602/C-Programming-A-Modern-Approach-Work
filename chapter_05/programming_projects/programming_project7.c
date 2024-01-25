#include <stdio.h>

int main(void)
{

	int a, b, c, d, largest1, largest2, largest, smallest1, smallest2, smallest;
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	largest1 = a >= b ? (smallest1 = b, a) : (smallest1 = a, b);
	largest2 = c >= d ? (smallest2 = d, c) : (smallest2 = c, d);
	largest = largest1 >= largest2 ? largest1 : largest2;
	smallest = smallest1 <= smallest2 ? smallest1 : smallest2;

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);



	return 0;
}
