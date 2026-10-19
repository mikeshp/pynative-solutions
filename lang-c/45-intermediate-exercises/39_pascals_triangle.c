/* PYnative.com C Exercise Solutions
 * 
 * Exercise 39: Pascals Triangle 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

//#define ROWS 5
#define ROWS 12

int main()
{
	int row;
	int col;
	int pascal[ROWS][ROWS];

	// populate pascal triangle
	for (row = 0; row < ROWS; row++)
	{
		for (col = 0; col <= row; col++)
		{
			// check if cell is edge, then set it 1
			if (col == 0 || col == row)
			{
				pascal[row][col] = 1;
			}
			else
			{
				pascal[row][col] = pascal[row-1][col-1] + pascal[row-1][col];
			}
		}
	}

	printf("Pascal's Triangle (%d rows)\n", ROWS);
	// display pascal triangle
	for (row = 0; row < ROWS; row++)
	{
		// fill in space according to row number
		for (int i = ROWS - 1; i > row; i--)
		{
			printf(" ");
		}
		// print out current cell followed with a space
		for (col = 0; col <= row; col++)
		{
			printf("%d ", pascal[row][col]);
		}
		// print out line break at the end of current row
		printf("\n");
	}

	return 0;
}
