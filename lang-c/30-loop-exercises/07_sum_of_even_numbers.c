/* 
 * Exercise 07: Sum Of Even Numbers 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>

int main(void)
{
	const int min = 1;
	const int max = 20;

	int sum = 0;
	for (int i = min; i <= max; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
		}
	}

	printf("Sum of even number from %d to %d: %d\n",min,max,sum);

	return 0;
}
