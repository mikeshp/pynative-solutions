/* PYnative.com C Exercise Solutions
 * 
 * Exercise 23: Print Primes In Range 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
#include <math.h>
int is_number_prime(int number)
{
	if (number < 0) number =- number;
	if (number < 1) return 0;
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
	int min, *input_min = &min;
	int max, *input_max = &max;

	printf("> Enter starting number: ");
	scanf(" %d",input_min);

	printf("> Enter the end number: ");
	scanf(" %d",input_max);

	printf("Prime numbers between %d and %d are:\n",min,max);

	for (int i = min; i <= max; i++)
	{
		if  (is_number_prime(i))
		{
			printf("%4d",i);
		}
	}

	printf("\n");
	return 0;
}
