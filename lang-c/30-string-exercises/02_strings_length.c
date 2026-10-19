/* PYnative.com C Exercise Solutions
 * 
 * Exercise 02: Strings Length 
 * https://pynative.com/c-programming-string-exercises
 */

#include <stdio.h>
int str_len(char*);
int main()
{
//	char string[] = "Hello World!";
	char string[] = "This is yet another string.";
	printf("The string is: %s\n",string);
	printf("The length of the string is: %d\n",str_len(string));
	return 0;
}
int str_len(char* string)
{
	int counter = 0;
	while (string[counter] != '\0')
	{
		counter++;
	}
	return counter;
}
