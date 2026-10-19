/* PYnative.com C Exercise Solutions
 * 
 * Exercise 17: Multiplication Table 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int N;
	
	printf("Give me N:\n");
	scanf(" %d", &N);
	printf("\n");
	
	printf("Multiplication table for %d:\n", N);
	
	for (int i = 1; i <= 10; i++)
		printf("N \'%d\' x %d = %d\n", N, i, N * i);
	
	return 0;
}
