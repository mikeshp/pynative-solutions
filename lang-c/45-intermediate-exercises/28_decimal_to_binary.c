/* Exercise 28: Decimal To Binary 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

void print_binary(char*, int);

int main()
{
	char binary[9];
	int number;

	number = 10;
	print_binary(binary, number);
	printf("Decimal: %d\nBinary: %s\n", number, binary);

	number = 42;
	print_binary(binary, number);
	printf("Decimal: %d\nBinary: %s\n", number, binary);

	return 0;
}

void print_binary(char* binary, int number)
{
	for (int i = 7; i >= 0; i--)
	binary[7 - i] = ((number >> i) & 1) ? '1' : '0';
	binary[8] = '\0';
}
