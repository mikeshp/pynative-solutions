/* 
 * Exercise 21: Exponential Notation 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

int main()
{
	double number = 0.0;

	printf("Enter very big number: \n");
	scanf(" %lf", &number);

	printf("Your number exponential: %e\n", number);

	return 0;
}
