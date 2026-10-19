/* PYnative.com C Exercise Solutions
 * 
 * Exercise 17: Solid Rectangle Pattern 
 * https://pynative.com/c-programming-loops-exercises
 */

#include<stdio.h>
void clear_buffer(void)
{
	int c;
	while((c = getchar()) != '\n' && c != EOF);
}
void scan_input(int* input)
{
	while(scanf(" %d",input) != 1)
	{
		clear_buffer();
	}
	clear_buffer();
}
void input_data(int* rows, int* cols)
{
	printf(">  Enter number of rows: ");
	scan_input(rows);
	printf(">  Enter number of coloumns: ");
	scan_input(cols);
}
void draw_rectangle(int rows, int cols)
{
	printf("\n");
	for (int r=0; r<rows; r++)
	{
		for (int c=0; c<cols; c++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n");
}
int main(void)
{
	int rows, *input_rows = &rows;
	int cols, *input_cols = &cols;

	input_data(input_rows,input_cols);
	draw_rectangle(rows,cols);

	return 0;
}
