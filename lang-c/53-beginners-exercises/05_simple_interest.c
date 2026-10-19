/* 
 * Exercise 05: Simple Interest 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

float calculateInterest(float, float, float);

#include <stdio.h>

int main()
{
	float principal, rate, years;
	principal = 1000;
	rate = 8;
	years = 3;
	
	printf("Expected interest is %.2f\n",
		calculateInterest(principal, rate, years));
	
	return 0;
}

float calculateInterest(float p, float r, float y)
{
	return y * p * r / 100;
}
