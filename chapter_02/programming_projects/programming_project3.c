#include <stdio.h>

int main(void)
{

	int radius, r_cubed;
	printf("Enter the radius of your sphere: ");
	scanf("%d", &radius);
	r_cubed = radius * radius * radius;

	float pi = 3.14f, volume = (4.0f /3.0f) * pi * r_cubed;

	printf("Volume of %dm radius sphere: %.2f\n", radius, volume);

	return 0;
}
