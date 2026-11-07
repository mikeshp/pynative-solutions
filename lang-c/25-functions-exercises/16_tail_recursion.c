/* 
 * Exercise 16: Tail Recursion 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
long long factorial(int);
long long tail_recursion(int,long long);
int main(void)
{
	int number, *input_number = &number;

	printf("Enter a number: ");
	scanf(" %d",input_number);

	printf("Factorial of %d (Tail Recursion) is: %lld\n",
	number,factorial(number));

	return 0;
}
long long factorial(int number)
{
	if (number <= 1) return 1;

	return tail_recursion(number,1);
}
long long tail_recursion(int number,long long accumulator)
{
	if (number == 0) return accumulator;

	return tail_recursion(number-1,number*accumulator);
}
