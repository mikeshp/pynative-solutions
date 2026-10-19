/* PYnative.com C Exercise Solutions
 * 
 * Exercise 14: Check For Palindrome 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>

void clear_buffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int reverse_digits(int number)
{
	if (number < 10)
	{
		return number;
	}

	int revers = 0;

	while (number != 0)
	{
		revers = revers * 10 + (number % 10);
		number = number / 10;
	}

	return revers;
}

int is_palindrome(int number)
{
	if (number == reverse_digits(number))
	{
		return 1;
	}

	return 0;
}

int main(void)
{
	int number, *input_number = &number;

	printf(">  Enter a positive number: ");

	while (scanf(" %d",input_number) != 1)
	{
		clear_buffer();
	}

	clear_buffer();

	printf("%d %s a palindrome number!\n",
	number,is_palindrome(number) ? "is" : "is not");

	return 0;
}
