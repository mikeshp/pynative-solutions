/* Exercise 40: Hollow Triangle Pattern 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
//#define ROWS 5
#define ROWS 15

int main()
{
	printf("Generating Hollow Triangle (Height %d)\n",ROWS);
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < ROWS + row; col++)
		{
			// if last row print out all stars
			if (row == ROWS - 1)
			{
				printf("*");
			}
			else
			{
				// detect edges and print out stars
				if (col == ROWS - 1 - row || col == ROWS - 1 + row)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		// line break at the end of current row
		printf("\n");
	}
	return 0;
}
