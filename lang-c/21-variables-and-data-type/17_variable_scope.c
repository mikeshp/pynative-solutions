/* 
 * Exercise 17: Variable Scope 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

int main()
{
	int number = 42;

	{
		int number = 43;

		printf("The inner number is %d\n", number);
	}

	if (number == 42)
	{
		printf("The 'number' is still %d\n", number);

		int number = 43;

		if (number == 42)
		{
			printf("The 'number' is still %d\n", number);
		}
		else
		{
			printf("The 'number' is now %d\n", number);
		}
	}
	else
	{
		printf("The 'number' is now %d\n", number);
	}

	return 0;
}
