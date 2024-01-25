#include <stdio.h>
#define dollars float

int main(void)
{
	dollars income, tax;

	printf("Enter amount of taxable income: ");
	scanf("%f", &income);

	tax = income < 750.0f ? 0.01 * income :
	      750.0f <= income && income < 2250.0f ? 7.5f + 0.02f * (income - 750) :
	      2250.0f <= income && income < 3750.0f ? 37.5f + 0.03f * (income - 2250.0f) :
	      3750.0f <= income && income < 5250.0f ? 82.5f + 0.04f * (income - 3750.0f) :
	      5250.0f <= income && income < 7000.0f ? 142.5f + 0.05f * (income - 5250.0f ) : 230.0f + 0.06 * (income - 7000.0f);

	printf("Your tax due: %.2f\n", tax);

	return 0;
}
