#include <stdio.h>

int main(void)
{

	int input_hour, input_min, total_min_mdn,
	    dt1, dt2, dt3, dt4, dt5, dt6, dt7, dt8;
	char meridiem1, meridiem2;
	
	//  Time input
	/*
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &input_hour, &input_min);
	total_min_mdn = input_hour * 60 + input_min;
	*/
	printf("Enter a 12-hour time (with AM/PM): ");
	scanf("%d:%d %c%c", &input_hour, &input_min, 
			&meridiem1, &meridiem2);
	switch(meridiem1) {
		case 'A': case 'a':
			if (input_hour == 12) input_hour = 0;
			total_min_mdn = input_hour * 60 + input_min;
			break;
		case 'P': case 'p':
			if (input_hour == 12) input_hour = 0;
			total_min_mdn = (input_hour + 12) * 60 + input_min;
			break;
	}


	dt1 = 8 * 60; // 8:00 am
	dt2 = 9 * 60 + 43; // 9:43 am
	dt3 = 11 * 60 + 19; // 11:19 am
	dt4 = 12 * 60 + 47; // 12:47 pm
	dt5 = 14 * 60; // 2:00 pm
	dt6 = 15 * 60 + 45; // 3:45 pm
	dt7 = 19 * 60; // 7:00 pm
	dt8 = 21 * 60 + 45; // 9:45 pm

	// Closest time decision
	if (total_min_mdn <= dt1) {
		int delta_dt1 = dt1 - total_min_mdn, 
		    delta_dt8 = (24 * 60) + total_min_mdn - dt8;
		if (delta_dt1 < delta_dt8) 
			printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
		else 
			printf("Closest departure time is 9:45 p.m., arriving at 11:58 a.m.\n");
	} else if (dt1 < total_min_mdn && total_min_mdn<= dt2) {

		int delta_dt1 = total_min_mdn - dt1,
		    delta_dt2 = dt2 - total_min_mdn;
		if (delta_dt1 < delta_dt2) 
			printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
		else 
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");

	}  else if (dt2 < total_min_mdn && total_min_mdn<= dt3) {

		int delta_dt2 = total_min_mdn - dt2,
		    delta_dt3 = dt3 - total_min_mdn;
		if (delta_dt2 < delta_dt3) 
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
		else 
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 a.m.\n");
	} else if (dt3 < total_min_mdn && total_min_mdn<= dt4) {

		int delta_dt3 = total_min_mdn - dt3,
		    delta_dt4 = dt4 - total_min_mdn;
		if (delta_dt3 < delta_dt4) 
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 a.m.\n");
		else 
			printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	} else if (dt4 < total_min_mdn && total_min_mdn<= dt5) {

		int delta_dt4 = total_min_mdn - dt4,
		    delta_dt5 = dt5 - total_min_mdn;
		if (delta_dt4 < delta_dt5) 
			printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
		else 
			printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	} else if (dt5 < total_min_mdn && total_min_mdn<= dt6) {

		int delta_dt5 = total_min_mdn - dt5,
		    delta_dt6 = dt6 - total_min_mdn;
		if (delta_dt5 < delta_dt6) 
			printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
		else 
			printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	}  else if (dt6 < total_min_mdn && total_min_mdn<= dt7) {

		int delta_dt6 = total_min_mdn - dt6,
		    delta_dt7 = dt7 - total_min_mdn;
		if (delta_dt6 < delta_dt7) 
			printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
		else 
			printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	} else {

		int delta_dt7 = total_min_mdn - dt7,
		    delta_dt8 = dt8 - total_min_mdn;
		if (delta_dt7 < delta_dt8) 
			printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
		else 
			printf("Closest departure time is 9:45 p.m., arriving at 11:58 a.m.\n");
	}

	return 0;
}
