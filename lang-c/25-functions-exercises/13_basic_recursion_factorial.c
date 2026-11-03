/* 
 * Exercise 13: Basic Recursion Factorial 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
void print_factorial(int);
long int calculate_factorial(long int);
int main(void)
{
	int number, *input_number = &number;

	printf("Enter non-negative number: ");
	scanf(" %d",input_number);

	printf("%d! = ",number);
	print_factorial(number);
	printf("%ld\n",calculate_factorial((long int)number));

	return 0;
}
long int calculate_factorial(long int number)
{
	if (number == 0)
	{
		return 1;
	}
	if (number == 1)
	{
		return 1;
	}

	return number * calculate_factorial(number - 1);
}
void print_factorial(int number)
{
	// Zero and one is to be ignored here
	if (number > 1)
	{
		if (number == 2)
		{
			printf("%d x 1 = ",number);
		}
		else
		{
			printf("%d x ",number);
			print_factorial(number - 1);
		}
	}
}
