/* 
 * Exercise 21: Extern Keyword For Function 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
#include "21_extern_keyword_for_helper.h"
int main(void)
{
	int number, *magic_number = &number;

	printf("Enter magic number: ");
	scanf(" %d",magic_number);

	show_the_number(number);

	return 0;
}
