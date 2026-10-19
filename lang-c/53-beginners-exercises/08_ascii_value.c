/* 
 * Exercise 08: Ascii Value 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	char ch;
	
	printf("Enter a character:\n");
	scanf(" %c", &ch);
	
	printf("You entered '%c'\n", ch);
	printf("Its ASCII is '%d'\n", ch);
	
	return 0;
}
