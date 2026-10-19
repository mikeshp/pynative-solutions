/* PYnative.com C Exercise Solutions
 * 
 * Exercise 22: Check For Prime 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
#include <math.h>
int is_number_prime(int number)
{
	if (number < 0) number =- number;
	if (number < 4) return 1;

	for (int i = 2; i <= (int)sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
int main(void)
{
	int number, *input_number = &number;

	printf("> Enter a number: ");
	scanf(" %d",input_number);

	printf("%d is %s PRIME number\n",number,
	(is_number_prime(number))?"a":"NOT a");

	return 0;
}
