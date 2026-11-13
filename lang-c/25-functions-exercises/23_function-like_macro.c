/* 
 * Exercise 23: Function-Like Macro 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
#define Sum(x) (x+x)
#define Sqr(x) (x*x)
int main(void)
{
	int x;

	printf("Enter number x: ");
	scanf(" %d",&x);

	printf("The square of %d is %d\n",x,Sqr(x));
	printf("The sum of %d + %d is %d\n",x,x,Sum(x));
	// To check precedence, add more operation
	printf("The square of %d * sum of %d + %d is %d\n",x,x,x,Sqr(x)*Sum(x));
	// Sqitch place to check precedence
	printf("The sum of %d + %d * square of %d is %d\n",x,x,x,Sum(x)*Sqr(x));

	return 0;
}
