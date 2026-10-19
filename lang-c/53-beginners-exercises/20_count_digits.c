/* Exercise 20: Count Digits 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int N, number, digits;
	
	printf("Give me a number N: \n");
	scanf(" %d", &number);
	
	digits = 1;
	N = number < 0 ? number * -1 : number;
	
	while ((N /= 10) >= 1) digits++;
	
	printf("Number %d contains %d digits!\n", number, digits);
	
	return 0;
}
