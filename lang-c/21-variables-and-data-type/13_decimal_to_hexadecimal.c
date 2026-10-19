/* Exercise 13: Decimal To Hexadecimal 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

int main()
{
	int num;

	printf("Give me a number:\n");
	scanf(" %d", &num);

	printf("Hexadecimal of %d is %x\n", num, num);

	return 0;
}
