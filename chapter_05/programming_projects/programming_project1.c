#include <stdio.h>

int main(void)
{

	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("The number %d has %d digits\n", num,
			num >= 0 && num <= 9 ? 1 :
			num >= 10 && num <= 99 ? 2 :
			num >= 100 && num <= 999 ? 3 : 4);
	return 0;
}
