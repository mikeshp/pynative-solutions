/* PYnative.com C Exercise Solutions
 * 
 * Exercise 25: Armstrong Number 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
#include <math.h>
int is_armstrong(int number)
{
	int sum = 0;
	int num = number;
	while (num)
	{
//		printf("DEBUG: digit is %d\n",num%10);
//		printf("DEBUG: its cube is %d\n",(int)pow(num%10,3));
		sum = sum + (int) pow(num % 10, 3);
//		printf("DEBUG: sum becomes %d\n",sum);
		num = num / 10;
//		printf("DEBUG: num becomes %d\n",num);
	}
//	printf("sum == number: %s\n",(sum==number)?"true":"false");
	return sum == number;
}
int main(void)
{
	int number, *input_number = &number;

	printf("> Enter a three digit number: ");
	scanf(" %d",input_number);

	printf("%d %s an ARMSTRONG number.\n",
	number,is_armstrong(number)?"is":"is not");

	return 0;
}
