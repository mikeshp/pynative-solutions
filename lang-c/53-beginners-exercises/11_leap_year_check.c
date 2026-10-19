/* PYnative.com C Exercise Solutions
 * 
 * Exercise 11: Leap Year Check 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int isYearLeap(int*);

int main()
{
	int year;
	
	printf("Enter a year to check\n");
	scanf(" %d", &year);
	
	if (isYearLeap(&year))
		printf("The %d year IS leap!\n", year);
	else
		printf("The %d year is NOT leap!\n", year);
	
	return 0;
}

int isYearLeap(int* year)
{
	if (*year % 400 == 0 || (*year % 4 == 0 && *year % 100 != 0))
	return 1;
	
	return 0;
}
