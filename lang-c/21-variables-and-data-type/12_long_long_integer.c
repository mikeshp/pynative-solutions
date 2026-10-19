/* PYnative.com C Exercise Solutions
 * 
 * Exercise 12: Long Long Integer 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>
#include <limits.h>

int main()
{
	int x_int;
	long x_long;
	long long x_long_long;

	x_int = INT_MAX;
	x_long = LONG_MAX;
	x_long_long = LLONG_MAX;

	printf("An integer: %d\n", x_int);
	printf("A long integer: %ld\n", x_long);
	printf("Very long integer: %lld\n", x_long_long);

	return 0;
}
