/* 
 * Exercise 14: Simple Recursion Fibonacci Sequence 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
int fibonacci(int num_1,int num_2,int count)
{
	if (count == 7)
	{
		return num_1 + num_2;
	}

	// tail recursion sent from base thorugh the entire stack
	return fibonacci(num_2,num_2 + num_1,count + 1);
}
int main(void)
{
	int num_1 = 0;
	int num_2 = 1;
	int count = 2;	// assume we count from 1 which feels like incorrect


	printf("The 7th Fibonacci number is: %d\n",
	fibonacci(num_1,num_2,count));

	return 0;
}
