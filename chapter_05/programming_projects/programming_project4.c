#include <stdio.h>

typedef float knots;

int main(void) 
{
	knots wind_speed;
	printf("Enter a wind speed (in knots): ");
	scanf("%f", &wind_speed);

	if (wind_speed < 1.0f) 
		printf("Calm\n");
	else if (1.0f <= wind_speed && wind_speed <= 3.0f) 
		printf("Light air\n");
	else if (4.0f <= wind_speed && wind_speed <= 27.0f)
		printf("Breeze\n");
	else if (28.0f <= wind_speed && wind_speed <= 47.0f)
		printf("Gale\n");
	else if (48.0f <= wind_speed && wind_speed <= 63.0f)
		printf("Storm\n");
	else
		printf("Hurricane\n");

	return 0;
}
