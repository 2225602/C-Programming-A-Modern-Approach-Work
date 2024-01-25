/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
	int volume;
	volume = 8 * 12 * 10;

	printf("Dimensions: %dx%dx%d\n", 12, 10, 8);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}
