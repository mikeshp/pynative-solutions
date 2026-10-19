/* PYnative.com C Exercise Solutions
 * 
 * Exercise 25: Solid Rectangle Pattern 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int rows, cols, r, c;
	
	printf("How many rows and colomns?\n");
	scanf(" %d %d", &rows, &cols);
	
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++) printf("*");
		
		printf("\n");
	}
	
	
	return 0;
}
