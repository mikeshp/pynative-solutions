/* PYnative.com C Exercise Solutions
 * 
 * Exercise 23: Skip Even Numbers 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int N;
	
	printf("Give me number N\n");
	scanf(" %d", &N);
	
	printf("The odd numbers between 1 and %d are:\n", N);
	
	for (int i = 1; i <= N; i++) 
	{
		if (i % 2 == 0) continue;
		printf("%d ", i);
	}
	
	return 0;
}
