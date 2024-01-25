#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	int hour, minute;
	char meridiem1, meridiem2;
	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c%c", &hour, &minute, &meridiem1, &meridiem2);

	if (toupper(meridiem1) == 'A' && hour == 12)
		hour = 0;
	else if (toupper(meridiem1) == 'P' && hour != 12)
		hour += 12;
	else ;

	printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);

	return 0;
}
