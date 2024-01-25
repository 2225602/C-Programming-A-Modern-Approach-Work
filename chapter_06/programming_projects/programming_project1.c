#include <stdio.h>

int main(void)
{

	float largest_number;
	printf("Enter a number: ");
	scanf("%f", &largest_number);

	if (largest_number <= 0) {

		printf("The largest number entered was %f", largest_number);
		return 0;
	}

	float input_number;
	do {
		printf("Enter a number: ");
		scanf("%f", &input_number);
		largest_number = input_number > largest_number
			? input_number : largest_number;

	} while (input_number > 0);
	printf("The largest number entered was %.2f\n", largest_number);
	return 0;


}
