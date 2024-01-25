#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	float accumulator = 0, operand = 0;
	char operator = ' ';
	bool nextIsNum = true, finished = false;

	printf("Enter an expression: ");

	while (!finished) {
		if (nextIsNum) {
			scanf("%f", &operand);
			switch (operator) {
				case '+':
					accumulator += operand;
					break;
				case '-':
					accumulator -= operand;
					break;
				case '*':
					accumulator *= operand;
					break;
				case '/':
					accumulator /= operand;
					break;
				default:
					accumulator = operand;
			}
			nextIsNum = false;
		} else {
			scanf("%c", &operator);
			if (operator == '\n') break;
			else if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
				nextIsNum = true;
			}
			else {
				continue;
			}
		}
	}

	printf("Value of expression: %f\n", accumulator);

	return 0;

}
