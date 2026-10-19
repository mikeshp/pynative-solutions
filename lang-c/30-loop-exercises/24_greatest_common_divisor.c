/* PYnative.com C Exercise Solutions
 * 
 * Exercise 24: Greatest Common Divisor 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
int find_gcd(int num1, int num2)
{
	int gcd = 1;
	for (int i = 1; i <= num1; i++)
	{
		if (num1 % i == 0
		&&  num2 % i == 0)
		gcd = i;
	}
	return  gcd;
}
int main(void)
{
	int num1, *input_num1 = &num1;
	int num2, *input_num2 = &num2;

	printf("> Enter two poitive numbers: ");
	scanf(" %d %d",input_num1,input_num2);

	printf("GCD of %d and %d is: %d\n",
	num1,num2,find_gcd(num1,num2));

	return 0;
}
