/* 
 * Exercise 27: Generate Fibonacci 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
void printFibonacci(int number)
{
	int a = 0;
	int b = 1;
	int c;

	printf("Fibonacci %d numbers:",number);

	printf(" %d",a);

	if (number > 1)
	{
		printf(" %d",b);
	}

	if (number > 2)
	{
		for (int i = 3; i <= number; i++)
		{
			c = a + b;
			printf(" %d",c);
			a = b;
			b = c;
		}
	}

	printf("\n");
}
int main(void)
{
	int number, *input_number = &number;

	printf("Enter number of... numbers: ");
	scanf(" %d",input_number);

	printFibonacci(number);

	return 0;
}
