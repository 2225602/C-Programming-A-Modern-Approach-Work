#include <stdio.h>

int main(void)
{
	int score;
	printf("Enter your score: ");
	scanf("%d", &score);

	// Q. Are the following if statements equivalent? 
	// If not, why not?

	printf("First grade computation: ");
	if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("F");

	printf("\nSecond grade computation: ");
	if (score < 60)
		printf("F");
	else if (score < 70)
		printf("D");
	else if (score < 80)
		printf("C");
	else if (score < 90)
		printf("B");
	else
		printf("A");

	printf("\n");

	// A. Both of the given if statements are equal and print
	// out the same values; the only difference between 
	// them is the order of conditional operations they 
	// have to perform based on different scores.

	return 0;
}
