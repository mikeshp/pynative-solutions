/* Exercise 04: Print Odd Numbers From 1 To 20 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
int main()
{
	int i = 1;
	do
	{
		printf("%d ",i);
		i += 2;
	}
	while (i < 20);
	printf("\n");
	return 0;
}
