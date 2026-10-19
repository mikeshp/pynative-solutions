/* PYnative.com C Exercise Solutions
 * 
 * Exercise 06: Sum Of First N Integers 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
void clear_input();
int main()
{
	int num;
	int sum;
	printf("Enter highest positive number to sum up: ");
	while (1)
	{
		if (scanf("%d",&num) == 1)
		{
			if (num > 0)
			{
				clear_input();
				break;
			}
			else
			{
				clear_input();
				printf("Number must be positive: ");
			}
		}
		else
		{
			clear_input();
			printf("Wrong input, try again: ");
		}
	}
	sum = 0;
	for (int n = 1; n <= num; n++)
	{
		sum = sum + n;
	}
	printf("The sum of numbers from 1 to %d is: %d\n",num,sum);
	return 0;
}
void clear_input()
{
	char clear;
	while ((clear=getchar()) && clear!='\n' && clear!=EOF);
}
