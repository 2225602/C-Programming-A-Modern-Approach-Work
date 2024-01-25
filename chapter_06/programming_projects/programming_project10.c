#include <stdio.h>
#include <stdbool.h>

void get_earlier_date (int *, int *, int *, int, int, int, int, int, int);

int main(void)
{

	int m, d, y;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m, &d, &y);


	if (m == 0 && d == 0 && y == 0) {
		return 0;
	}

	int im, id, iy;
	printf("Enter a day (mm/dd/yy): ");
	scanf("%d/%d/%d", &im, &id, &iy);
	while (im != 0 && id != 0 && iy != 0) {
		get_earlier_date(&m, &d, &y, m, d, y, im, id, iy);
		printf("Enter a day (mm/dd/yy): ");
		scanf("%d/%d/%d", &im, &id, &iy);
	}

	printf("%.2d/%.2d/%.2d is the earliest date\n", m, d, y);
	return 0;
}

void get_earlier_date(int *em, int *ed, int *ey, int m1, int d1, int y1, int m2, int d2, int y2) {
	bool first_is_earlier = false;
	if (y1 < y2) first_is_earlier = true;
	else if (y1 == y2) {
		if (m1 < m2) first_is_earlier = true;
		else if (m1 == m2) 
			if (d1 < d2) first_is_earlier = true;
	}

	if (first_is_earlier) {
		*em = m1, *ed = d1, *ey = y1;
	}
	else {
		*em = m2, *ed = d2, *ey = y2;
	}

}
