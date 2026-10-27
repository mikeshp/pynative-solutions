/* 
 * Exercise 13: Reverse Number 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
#include <stdlib.h>

void clear_buffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

long unsigned int count_digits(int number)
{
	if (number == 0)
	{
		return (long unsigned int) 1;
	}

	long unsigned int count = 0;

	while (number != 0)
	{
		number = number / 10;
		count++;
	}

	return count;
}

char* reverse_number(int number)
{
	char* revstr
	=  (char*)malloc(count_digits(number)*sizeof(char) + 1);
	if (revstr == NULL) exit(1);

	if (number < 10)
	{
		revstr[0] = (char) number + '0';
		revstr[1] = '\0';
		return revstr;
	}

	int ptr = 0;

	while (number != 0)
	{
		revstr[ptr] = (char) (number % 10) + '0';
		number = number / 10;
		ptr++;
	}

	revstr[ptr] = '\0';
	return revstr;
}

int main(void)
{
	int number, *input_number = &number;

	printf("> Enter a positive number: ");

	while (1)
	{
		if (scanf(" %d",input_number) == 1)
		{
			clear_buffer();
			break;
		}

		clear_buffer();
	}

	char* reversed_number = reverse_number(number);

	printf("Original number: %d\n",number);
	printf("Reversed number: %s\n",reversed_number);

	free(reversed_number);
	return 0;
}
