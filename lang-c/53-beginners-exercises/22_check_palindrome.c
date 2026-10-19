/* 
 * Exercise 22: Check Palindrome 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int number, reversed, N;
	
	printf("Give me a number:\n");
	scanf(" %d", &number);
	
	N = number;
	reversed = 0;
	
	while (N != 0)
	{
		reversed *= 10;
		reversed += N % 10;
		N /= 10;
	}
	
	if (reversed == number)
		printf("Number %d IS a palindrome!\n", number);
	else
		printf("Number %d IS NOT a palindrome!\n", number);
	
	return 0;
}
