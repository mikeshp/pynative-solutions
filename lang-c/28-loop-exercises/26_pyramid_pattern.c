/* 
 * Exercise 26: Pyramid Pattern 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
int main(void)
{
	int rows, *number = &rows;

	printf("Enter number of rows: ");
	scanf(" %d",number);

	printf("\nNumber of rows: %d\n\n",rows);
	for (int r = 1; r <= rows; r++)
	{
		/* Print spaces */
		for (int i = rows - r; i > 0; i--)
		{
			printf(" ");
		}
		/* Print asterisks */
		for (int i = r*2 - 1; i > 0; i--)
		{
			printf("*");
		}
		/* Print Newline */
		printf("\n");
	}
	printf("\n");

	return 0;
}
