#include <stdio.h>

int main(void)
{
	int total_amount, twenties, tens, fives, ones;
	printf("Enter a dollar amount: ");
	scanf("%d", &total_amount);
	twenties = total_amount / 20;
	total_amount -= twenties * 20;
	tens = total_amount / 10;
	total_amount -= tens * 10;
	fives = total_amount / 5;
	total_amount -= fives * 5;
	ones = total_amount;

	printf("$20 bills:%2d\n", twenties);
	printf("$10 bills:%2d\n", tens);
	printf(" $5 bills:%2d\n", fives);
	printf(" $1 bills:%2d\n", ones);

	return 0;
}
