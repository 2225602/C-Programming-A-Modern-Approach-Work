#include <stdio.h>

int main(void)
{

	int radius = 10, r_cubed = radius * radius * radius;
	float pi = 3.14f, volume = (4.0f /3.0f) * pi * r_cubed;

	printf("Volume of 10m radius sphere: %.2f\n", volume);

	return 0;
}
