/* 
 * Exercise 02: Function With Parameters 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
void print_sum(int,int);
int add_numbers(int,int);
int main(void)
{
	int a;
	int b;

	a = 15;
	b = 7;
	print_sum(a,b);

	a = 100;
	b = 25;
	print_sum(a,b);

	return 0;
}
void print_sum(int a, int b)
{
	printf("The sum of %d and %d is: %d\n",a,b,add_numbers(a,b));
}
int add_numbers(int a, int b)
{
	return a + b;
}
