/* Exercise 10: Factorial 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
#include <stdbool.h>

void clear_buffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{
	unsigned int number, *input_number = &number;
	bool loop = true;

	while (loop)
	{
		printf("Enter a non-negative number: ");

		if (scanf(" %u",input_number) == 1)
		{
			clear_buffer();
			break;
		}

		clear_buffer();
	}

	unsigned long int factorial = 1;

	for (int i = 1; i <= (int) number; i++)
	{
		factorial = factorial * (unsigned int) i;
	}

	printf("Factorial of %u is %lu\n",number,factorial);

	return 0;
}
