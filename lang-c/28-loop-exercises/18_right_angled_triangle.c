/* 
 * Exercise 18: Right Angled Triangle 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
int main(void)
{
	unsigned int number_rows, *input_rows = &number_rows;

	printf(">  Enter number of rows: ");
	while (scanf(" %u",input_rows) != 1)
	{
		int c;
		while((c = getchar()) != '\n' && c != EOF);
	}

	printf("\n");
	for (int r = 1; r <= (int) number_rows; r++)
	{
		for (int c = 1; c <= r; c++)
		{
			printf("%3d",c);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
