/* 
 * Exercise 05: Pass By Value Integers 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
int increment(int);
int main(void)
{
	int number, *input_number = &number;

	printf("Enter a number: ");
	scanf(" %d",input_number);

	printf("Your incremented number is %d\n",increment(number));
	printf("Your original number is still %d\n",number);

	return 0;
}
int increment(int number)
{
//	number++;
//	return number++;	// returns not incremented value!
	return ++number;
}
