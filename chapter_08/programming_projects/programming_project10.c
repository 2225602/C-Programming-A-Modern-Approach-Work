#include <stdio.h>

int main(void)
{

	int input_hour, input_min, total_min_mdn;
	int dt[] = {
		8 * 60, // 8:00 am
		9 * 60 + 43, // 9:43 am
		11 * 60 + 19, // 11:19 am
		12 * 60 + 47, // 12:47 pm
		14 * 60, // 2:00 pm
		15 * 60 + 45, // 3:45 pm
		19 * 60, // 7:00 pm
		21 * 60 + 45}; // 9:45 pm
	
	//  Time input
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &input_hour, &input_min);
	total_min_mdn = input_hour * 60 + input_min;

	// Closest time decision
	if (total_min_mdn <= dt[0]) {
		int delta_dt1 = dt[0] - total_min_mdn, 
		    delta_dt8 = (24 * 60) + total_min_mdn - dt[7];
		if (delta_dt1 < delta_dt8) 
			printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
		else 
			printf("Closest departure time is 9:45 p.m., arriving at 11:58 a.m.\n");
	} else if (dt[0] < total_min_mdn && total_min_mdn<= dt[1]) {

		int delta_dt1 = total_min_mdn - dt[0],
		    delta_dt2 = dt[1] - total_min_mdn;
		if (delta_dt1 < delta_dt2) 
			printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
		else 
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");

	}  else if (dt[1] < total_min_mdn && total_min_mdn<= dt[2]) {

		int delta_dt2 = total_min_mdn - dt[1],
		    delta_dt3 = dt[2] - total_min_mdn;
		if (delta_dt2 < delta_dt3) 
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
		else 
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 a.m.\n");
	} else if (dt[2] < total_min_mdn && total_min_mdn<= dt[3]) {

		int delta_dt3 = total_min_mdn - dt[2],
		    delta_dt4 = dt[3] - total_min_mdn;
		if (delta_dt3 < delta_dt4) 
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 a.m.\n");
		else 
			printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	} else if (dt[3] < total_min_mdn && total_min_mdn<= dt[4]) {

		int delta_dt4 = total_min_mdn - dt[3],
		    delta_dt5 = dt[4] - total_min_mdn;
		if (delta_dt4 < delta_dt5) 
			printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
		else 
			printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	} else if (dt[4] < total_min_mdn && total_min_mdn<= dt[5]) {

		int delta_dt5 = total_min_mdn - dt[4],
		    delta_dt6 = dt[5] - total_min_mdn;
		if (delta_dt5 < delta_dt6) 
			printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
		else 
			printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	}  else if (dt[5] < total_min_mdn && total_min_mdn<= dt[6]) {

		int delta_dt6 = total_min_mdn - dt[5],
		    delta_dt7 = dt[6] - total_min_mdn;
		if (delta_dt6 < delta_dt7) 
			printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
		else 
			printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	} else {

		int delta_dt7 = total_min_mdn - dt[6],
		    delta_dt8 = dt[7] - total_min_mdn;
		if (delta_dt7 < delta_dt8) 
			printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
		else 
			printf("Closest departure time is 9:45 p.m., arriving at 11:58 a.m.\n");
	}

	return 0;
}
