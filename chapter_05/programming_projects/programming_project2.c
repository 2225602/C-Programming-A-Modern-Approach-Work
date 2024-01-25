#include <stdio.h>
#include <stdbool.h>

typedef int hour;
typedef int minute;

int main(void)
{

	hour hr24, hr12;
	minute min24, min12;
	bool beforeNoon;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hr24, &min24);

	min12 = min24;
	beforeNoon = (hr24 >= 0 && min24 >= 0) && 
		(hr24 <= 11 && min24 <= 59);
	switch (hr24) {
		case 13: 
			hr12 = 1;
			break;
		case 14:
			hr12 = 2;
			break;
		case 15:
			hr12 = 3;
			break;
		case 16:
			hr12 = 4;
			break;
		case 17:
			hr12 = 5;
			break;
		case 18:
			hr12 = 6;
			break;
		case 19:
			hr12 = 7;
			break;
		case 20:
			hr12 = 8;
			break;
		case 21:
			hr12 = 9;
			break;
		case 22:
			hr12 = 10;
			break;
		case 23:
			hr12 = 11;
			break;
		case 0:
			hr12 = 12;
			break;
		default:
			hr12 = hr24;
	}

	printf("Equivalent 12-hour time: %.2d:%.2d ",
			hr12, min12);
	if (beforeNoon) printf("AM\n");
	else printf("PM\n");



	return 0;
}
