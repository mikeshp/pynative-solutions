/* 
 * Exercise 05: Reverse Count 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
int main()
{
	int n = 10;
	while (n == 1 || n > 1)
	{
		printf("> %2.2d\n",n);
		n = n - 1;
	}
	return 0;
}
