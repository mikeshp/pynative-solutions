/* PYnative.com C Exercise Solutions
 * 
 * Exercise 10: Largest Of Three Numbers 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int a, b, c;
	a = 10;
	b = 30;
	c = 20;
	
	if (a >= b && a >= c)
		printf("The largest is A: %d", a);
	else if (b >= a && b >= c)
		printf("The largest is B: %d", b);
	else
		printf("The largest is C: %d", c);
	
	return 0;
}
