/* PYnative.com C Exercise Solutions
 * 
 * Exercise 14: Time Difference Normalization 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
//#include <stdlib.h>

typedef struct
{
	int hour;
	int min;
	int sec;
} Time;

int hasZero(int);
int total_secs(Time);
int find_difference(Time, Time);
Time time_from_secs(int);

int main()
{
	Time time_point_1 = {10, 30, 00};
	Time time_point_2 = {12, 15, 30};

	printf("Time 1 > %c%d:%c%d:%c%d (%d sec)\n",
	hasZero(time_point_1.hour), time_point_1.hour,
	hasZero(time_point_1.min), time_point_1.min,
	hasZero(time_point_1.sec), time_point_1.sec,
	total_secs(time_point_1));

	printf("Time 2 > %c%d:%c%d:%c%d (%d sec)\n",
	hasZero(time_point_2.hour), time_point_2.hour,
	hasZero(time_point_2.min), time_point_2.min,
	hasZero(time_point_2.sec), time_point_2.sec,
	total_secs(time_point_2));

	int difference_secs = find_difference(time_point_1, time_point_2);
	Time time_difference = time_from_secs(difference_secs);

	printf("Difference > %c%d:%c%d:%c%d (%d sec)\n",
	hasZero(time_difference.hour), time_difference.hour,
	hasZero(time_difference.min), time_difference.min,
	hasZero(time_difference.sec), time_difference.sec,
	total_secs(time_difference));

	return 0;
}

Time time_from_secs(int secs)
{
	Time new_time;

	if ((secs / 3600) > 0)
	new_time.hour = secs / 3600;
	else
	new_time.hour = 00;

	if (((secs - (new_time.hour * 3600)) / 60) > 0)
	new_time.min = (secs - (new_time.hour * 3600)) / 60;
	else
	new_time.min = 00;

	new_time.sec = secs - (new_time.hour * 3600) - (new_time.min * 60);

	return new_time;
}

int find_difference(Time point_1, Time point_2)
{
	int secs_1 = total_secs(point_1);
	int secs_2 = total_secs(point_2);

	if (secs_1 > secs_2)
	return secs_1 - secs_2;
	else
	return secs_2 - secs_1;
}

int total_secs(Time time)
{
	return (time.hour * 60 * 60) + (time.min * 60) + time.sec;
}

int hasZero(int value)
{
	if (value < 10)
	return 48;
	return 0;
}
