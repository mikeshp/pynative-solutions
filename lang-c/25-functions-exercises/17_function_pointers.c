/* 
 * Exercise 17: Function Pointers 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
int multiply(int a,int b)
{
	return a*b;
}
int main(void)
{
	int a, *input_a = &a;
	int b, *input_b = &b;

	int (*ptr_multiply)(int,int) = &multiply;

	printf("Enter two numbers (A B): ");
	scanf(" %d %d",input_a,input_b);

	printf("Result of multiplication (via function pointer) is: %d\n",
	(*ptr_multiply)(a,b));

	return 0;
}
