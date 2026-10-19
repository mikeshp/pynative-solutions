/* 
 * Exercise 19: Factorial Of A Number 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int N;
	//N = 5;
	
	printf("Give me a positive number: \n");
	scanf(" %d", &N);
	
	long factorial;
	factorial = 1;
	
	for (int i = 2; i <= N; i++) factorial *= i;
	
	printf("The factorial of %d is %ld\n", N, factorial);
		
	return 0;
}
