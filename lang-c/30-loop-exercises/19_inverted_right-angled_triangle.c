/* PYnative.com C Exercise Solutions
 * 
 * Exercise 19: Inverted Right-Angled Triangle 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
int main(void)
{
	unsigned int number_rows, *input_rows = &number_rows;

	printf(">  Enter a positive number of rows: ");
	scanf(" %u",input_rows);

	printf("\nNumber of rows: %d\n\n",(int)number_rows);

	for (int r = (int) number_rows; r >= 1; r--)
	{
		for (int c = r; c >= 1; c--)
		{
			printf(" * ");
		}

		printf("\n");
	}

	printf("\n");
	return 0;
}
