#include <stdio.h>

int main(void)
{
	int month_days, starting_day, day_pointer = 0;
	printf("Enter number of days in month: ");
	scanf("%d", &month_days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &starting_day);

	// Prints leading spaces before the starting day.
	for (int i = 1; i < starting_day; day_pointer++, i++) {
		printf("   ");
	}

	// Print the days.
	for (int current_day = 1; current_day <= month_days;
			current_day++, day_pointer++) {
		if (day_pointer % 7 == 0) {
			printf("\n");
		}
		printf("%3d", current_day);
	}
	printf("\n");
	return 0;
}
