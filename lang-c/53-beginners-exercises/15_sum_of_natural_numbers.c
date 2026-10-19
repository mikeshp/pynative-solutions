/* PYnative.com C Exercise Solutions
 * 
 * Exercise 15: Sum Of Natural Numbers 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int N, sum = 0;
	
	printf("input number N:\n");
	scanf(" %d", &N);
	
	for (int i = 1; i <= N; i++) sum += i;
	
	printf("The summ of integers from 1 to %d is %d\n", N, sum);
	
	return 0;
}
