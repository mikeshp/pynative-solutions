/* PYnative.com C Exercise Solutions
 * 
 * Exercise 24: Fibonacci Series 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int N, t1, t2, t3;
	
	printf("Give me number N\n");
	scanf(" %d", &N);
	
	printf("Fibonacci series up to %d:\n", N);
	
	t1 = 0;
	t2 = 1;
	t3 = t2;
	while ((t2 += t1) <= N)
	{
		printf("%d ", t2);
		t1 = t3;
		t3 = t2;
	}
	
	return 0;
}
