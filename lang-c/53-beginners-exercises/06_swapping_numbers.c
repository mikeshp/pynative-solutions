/* Exercise 06: Swapping Numbers 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void swapNumbers(int*, int*);

int main()
{
	int a = 10;
	int b = 20;
	
	printf("Before swap\nA = %d\nB = %d\n\n", a, b);
	
	swapNumbers(&a, &b);
	
	printf("After swap\nA = %d\nB = %d\n\n", a, b);
	
	return 0;
}

void swapNumbers(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
