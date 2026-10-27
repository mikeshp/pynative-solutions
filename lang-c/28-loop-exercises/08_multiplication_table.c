/* 
 * Exercise 08: Multiplication Table 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	const int min = 1;
	const int max = 10;

	int number, *num = &number;
	bool loop = true;

	while (loop)
	{
		printf("Enter a number: ");
		if (scanf(" %d",num) == 1)
		{
			loop = false;
		}
	}

	printf("\n--- Multiplication table for %d ---\n",number);

	for (int i = min; i <= max; i++)
	{
		printf("%4d X %d = %d\n",number,i,number * i);
	}

	return 0;
}
