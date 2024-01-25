#include <stdio.h>
#include <stdbool.h>

int main(void)
{

	int age;
	bool teenager;

	printf("Enter your age: ");
	scanf("%d", &age);
	if (age >= 13)
		if (age <= 19)
			teenager = true;
		else
			teenager = false;
	else if (age < 13)
		teenager = false;

	printf("First teenager assignment: ");
	if (teenager) printf("You are a teenager.\n");
	else  printf("You're not a teenager.\n");

	// The above if statement can be further simplified
	// using the given assignment statement:
	
	printf("Second teenager assignment: ");
	teenager = age >= 13 && age <= 19;
	if (teenager) printf("You are a teenager.\n");
	else  printf("You're not a teenager.\n");

	return 0;
}
