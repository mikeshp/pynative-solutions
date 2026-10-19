/* 
 * Exercise 27: Bitwise Toggle 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

void print_binary(char*, int);
void toggle_bit(int*, int);

int main()
{
	int X = 5;
	char binaryX[9];

	print_binary(binaryX, X);
	printf("Number: %d (Binary: %s)\n", X, binaryX);

	printf("Toggling bit # 1...\n");
	toggle_bit(&X, 1);
	print_binary(binaryX, X);
	printf("Number: %d (Binary: %s)\n", X, binaryX);

	printf("Toggling bit # 6...\n");
	toggle_bit(&X, 6);
	print_binary(binaryX, X);
	printf("Number: %d (Binary: %s)\n", X, binaryX);

	printf("Toggling bit # 2...\n");
	toggle_bit(&X, 2);
	print_binary(binaryX, X);
	printf("Number: %d (Binary: %s)\n", X, binaryX);

	return 0;
}

void toggle_bit(int* number, int bit)
{
	*number ^= 1 << bit;
}

void print_binary(char* string, int number)
{
	for (int i = 7; i >= 0; i--)
	{
		string[7 - i] = (number & (1 << i)) ? '1' : '0';
	}
	string[8] = '\0';
}
