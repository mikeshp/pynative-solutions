/* Exercise 21: Reverse A Unmber 
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
	
	printf("Reversed %d will be %d\n", number, reversed);
	
	return 0;
}
