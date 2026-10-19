/* Exercise 02: Calculate Sum 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int a,b,sum;
	
	printf("Give me two numbers:\n");
	scanf("%d %d", &a, &b);
	
	sum = a + b;
	
	printf("The summ of %d and %d is %d\n\n", a, b, sum);
	
	return 0;
}
