/* 
 * Exercise 36: String Reversal 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int calculateStringLength(char[]);
char* reverseString(char[], int*);

int main()
{
	char string[100] = "This is some text string.";
	//char string[100] = "And yet another string";
	int length;
	
	printf("Give me a string:\n");
	scanf("%s", string);
	
	length = calculateStringLength(string);
	
	//reverseString(string, &length);
	
	printf("String: %s\n", string);
	printf("Reversed: %s\n", reverseString(string, &length));
	
	
	return 0;
}

int calculateStringLength(char string[])
{
	int i = 0;
	
	while (string[i] != '\0') i++;
	
	return i;
}

char* reverseString(char string[], int* length)
{
	int half = *length / 2;
	int i = 0;
	char temp;
	
	while (i < half)
	{
		temp = string[i];
		string[i] = string[(*length) - 1 - i];
		string[(*length) - 1 - i] = temp;
		i++;
	}
	
	return string;
}
