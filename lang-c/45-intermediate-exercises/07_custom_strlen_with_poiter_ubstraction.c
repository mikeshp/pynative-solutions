/* PYnative.com C Exercise Solutions
 * 
 * Exercise 07: Custom Strlen With Poiter Ubstraction 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

int my_strlen(char*);

int main()
{
	char string[] = "Hello World!";

	printf("The string: %s\n", string);
	printf("Its length: %d symbols\n", my_strlen(string));

	return 0;
}

int my_strlen(char* string)
{
	char* ptr = string;
	while (*ptr != '\0') ptr++;
	return ptr - string;
}
