/* PYnative.com C Exercise Solutions
 * 
 * Exercise 12: Count Digits 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>

void clear_buffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int count_digits(int number)
{
	if (number == 0)
	{
		return 1;
	}

	int count = 0;

	while (number != 0)
	{
		number = number / 10;
		count++;
	}

	return count;
}

int main(void)
{
	int number, *input_number = &number;

	printf("Enter a number: ");

	while (1)
	{
		if (scanf(" %d",input_number) == 1)
		{
			clear_buffer();
			break;
		}

		clear_buffer();
	}

	printf("The number of digits in %d is: %d\n",
		number,count_digits(number));

	return 0;
}
