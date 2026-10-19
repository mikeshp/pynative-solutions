/* 
 * Exercise 03: Character And Ascii 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

int main()
{
	char ch;

	printf("Print a character: ");
	scanf(" %c", &ch);

	printf("ASCII for '%c' is '%d'\n", ch, ch);

	return 0;
}
