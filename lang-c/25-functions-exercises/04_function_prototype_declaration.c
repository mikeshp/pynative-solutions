/* 
 * Exercise 04: Function Prototype Declaration 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
int is_even(int);
int main(void)
{
	int number, *input_number = &number;

	printf("Enter a number: ");
	scanf(" %d",input_number);

	printf("%d is %s EVEN number.\n",number,
	(is_even(number))?"an":"NOT an");

	return 0;
}
int is_even(int number)
{
	if (number % 2 == 0)
	return 1;
	return 0;
}
