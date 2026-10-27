/* 
 * Exercise 28: Print All Factors Of A Number 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
void printNumberFactors(int number)
{
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			printf(" %d",i);
		}
	}
}
int main(void)
{
	int number, *input_number = &number;

	printf("Enter a positive number: ");
	scanf(" %d",input_number);

	printf("All factors of %d:",number);
	printNumberFactors(number);
	printf("\n");

	return 0;
}
