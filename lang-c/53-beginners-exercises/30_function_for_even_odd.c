/* PYnative.com C Exercise Solutions
 * 
 * Exercise 30: Function For Even Odd 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void checkEvenOdd(int);

int main()
{
	int A = 42;
	int B = 17;
	int C;
	
	checkEvenOdd(A);
	checkEvenOdd(B);
	
	printf("\nGive me another number:\n");
	scanf(" %d", &C);
	
	checkEvenOdd(C);
	
	
	return 0;
}

void checkEvenOdd(int num)
{
	num % 2 == 0 ? printf("%d is EVEN!\n", num) :
	printf("%d is ODD!\n", num);
}
