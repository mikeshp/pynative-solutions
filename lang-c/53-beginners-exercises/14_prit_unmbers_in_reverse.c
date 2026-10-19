/* 
 * Exercise 14: Prit Unmbers In Reverse 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	printf("The first 10 natural numbers in descending order:\n");
	int i = 10;
	while (i >= 1)
	{
		printf("%d ", i);
		i--;
	}
	printf("\n");
	
	return 0;
}
