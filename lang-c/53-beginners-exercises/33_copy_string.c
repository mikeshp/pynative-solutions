/* PYnative.com C Exercise Solutions
 * 
 * Exercise 33: Copy String 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void stringCopy(char[], char[]);

int main()
{
	char string_source[] = "Please please, copy me!!!";
	char string_destination[100];
	
	stringCopy(string_source, string_destination);
	
	printf("Original string was: %s\n", string_source);
	printf("Cloned string is: %s\n", string_destination);
	
	return 0;
}

void stringCopy(char source[], char dest[])
{
	int i = 0;
	while (source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
}
