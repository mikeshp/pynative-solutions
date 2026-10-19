/* 
 * Exercise 14: Octal To Decimal 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

int main()
{
	int num;

	printf("Give me octal number:\n");
	scanf(" %o", &num);

	printf("Your octal %o decimal is %d\n", num, num);

	return 0;
}
