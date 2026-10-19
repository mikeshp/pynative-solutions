/* 
 * Exercise 32: String Length Calculation 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int stringLength(char[]);

int main()
{
	char string[100];
	int length = 0;
	
	printf("Give me a string: ");
	scanf("%s", string);

	//while (string[length] != '\0') length++;
	
	length = stringLength(string);
	
	printf("\nThe length of your string is %d characters!\n", length);
	
	
	return 0;
}

int stringLength(char string[])
{
	int i = 0;
	while (string[i] != '\0') i++;
	return i;
}
