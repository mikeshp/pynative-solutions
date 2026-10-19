/* Exercise 11: Integer Overflow 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>
#include <limits.h>

//#define MAX_INT 2147483647

int main()
{
//	int x = MAX_INT;
	int x = INT_MAX;

	printf("Starting with x less than maximum for 5\n");
	printf("and incrementing it by 1 20 times in a loop:\n");

	x -= 5;

	for (int i = 0; i < 20; i++)
	{
		printf("Incremented x: %d", x);
		if (x++ == INT_MAX) printf(" — Maximum!");
		printf("\n");
	}

	return 0;
}
