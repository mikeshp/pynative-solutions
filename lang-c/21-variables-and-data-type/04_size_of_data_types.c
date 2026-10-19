/* Exercise 04: Size Of Data Types 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

int main()
{
	printf("On my Debian 13 system\n");
	printf("Size of int is %zu bytes\n", sizeof(int));
	printf("Size of char is %zu bytes\n", sizeof(char));
	printf("Size of float is %zu bytes\n", sizeof(float));
	printf("Size of double int is %zu bytes\n", sizeof(double));
	printf("Size of long double is %zu bytes\n", sizeof(long double));

	return 0;
}
