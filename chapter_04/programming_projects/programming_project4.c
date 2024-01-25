#include <stdio.h>

int main(void)
{

	int decimal_input, octal_output = 0;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &decimal_input);

	octal_output +=  decimal_input % 8;
	decimal_input /= 8;
	octal_output +=  (decimal_input % 8) * 10;
	decimal_input /= 8;
	octal_output +=  (decimal_input % 8) * 100;
	decimal_input /= 8;
	octal_output +=  (decimal_input % 8) * 1000;
	decimal_input /= 8;
	octal_output +=  (decimal_input % 8) * 10000;
	printf("In octal, your number is: %.5d\n", octal_output);







	return 0;
}
