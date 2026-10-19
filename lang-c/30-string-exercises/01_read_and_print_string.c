/* PYnative.com C Exercise Solutions
 * 
 * Exercise 01: Read And Print String 
 * https://pynative.com/c-programming-string-exercises
 */

#include <stdio.h>
#define MAX_LENGTH 100
int main()
{
	char user_input[MAX_LENGTH];
	printf("Enter a string (up to 99 characters): ");
	fgets(user_input,MAX_LENGTH - 1,stdin);
	char clear_pointer = 0;
	while (1)
	{
		if (user_input[clear_pointer] == '\n')
		{
			user_input[clear_pointer] = '\0';
			break;
		}
		clear_pointer++;
	}
	printf("You entered: %s\n",user_input);
	return 0;
}
