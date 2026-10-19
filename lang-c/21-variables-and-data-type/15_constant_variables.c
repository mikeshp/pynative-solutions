/* PYnative.com C Exercise Solutions
 * 
 * Exercise 15: Constant Variables 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

int main()
{
	const int FIX = 42;

//	FIX = 43; //expecting error
//	FIX++;    //expecting error

	printf("Fixed value is %d\n", FIX);

	return 0;
}
