/* PYnative.com C Exercise Solutions
 * 
 * Exercise 09: Check Even 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int number;
	
	printf("Input an integer number:\n");
	scanf(" %d", &number);
	
	if (number == 0)
		printf("This is zero!\n");
	else if (number % 2 == 0)
		printf("The number %d is EVEN.\n", number);
	else
		printf("The number %d is ODD.\n", number);
	
	return 0;
}

