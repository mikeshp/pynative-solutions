/* Exercise 08: String Reversal In-Place 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

void reverse(char*);

int main()
{
	char string[] = "Hello there, world!";

	printf("String: %s\n", string);

	reverse(string);
	printf("Reversed: %s\n", string);

	return 0;
}

void reverse(char* string)
{
	char* ptr = string;
	char* temp;
	while (*ptr != '\0') ptr++;
	ptr--;						//index shift
	while (string < ptr)
	{
		*temp = *string;
		*string = *ptr;
		*ptr = *temp;
		string++;
		ptr--;
	}
}
