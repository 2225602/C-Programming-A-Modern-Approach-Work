#include <stdio.h>
#include <stdbool.h>

int main(void)
{

	int m1, d1, y1, m2, d2, y2;
	bool first_is_earlier = false;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1, &d1, &y1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m2, &d2, &y2);

	if (y1 < y2) first_is_earlier = true;
	else if (y1 == y2) {
		if (m1 < m2) first_is_earlier = true;
		else if (m1 == m2) 
			if (d1 < d2) first_is_earlier = true;
	}

	if (first_is_earlier) printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m1, d1, y1, m2, d2, y2);
	else printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m2, d2, y2, m1, d1, y1);
 



	return 0;
}
