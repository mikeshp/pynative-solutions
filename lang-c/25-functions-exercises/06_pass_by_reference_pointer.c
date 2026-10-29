/* 
 * Exercise 06: Pass By Reference Pointer 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
void inputNumber(int*,const char);
void clearBuffer(void);
void showNumbers(int,int);
void swapNumbers(int*,int*);
int main(void)
{
	int a, *input_a = &a;
	int b, *input_b = &b;

	inputNumber(input_a,'A');
	inputNumber(input_b,'B');

	printf("Before swap:\n");
	showNumbers(a,b);

	swapNumbers(&a,&b);

	printf("After swap:\n");
	showNumbers(a,b);

	return 0;
}
void inputNumber(int* number,const char ch)
{
	printf("Enter number %c: ",ch);
	scanf(" %d",number);
	clearBuffer();
}
void clearBuffer(void)
{
	int cl;
	while ((cl = getchar()) != '\n' && cl != EOF);
}
void showNumbers(int a,int b)
{
	printf("Number A: %d\n",a);
	printf("Number B: %d\n",b);
}
void swapNumbers(int* a,int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
