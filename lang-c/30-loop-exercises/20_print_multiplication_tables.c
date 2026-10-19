/* PYnative.com C Exercise Solutions
 * 
 * Exercise 20: Print Multiplication Tables 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
//	const int base_min = 1;
//	const int base_max = 10;
	const int mult_min = 1;
	const int mult_max = 10;

	const int input_size = 32;
	char user_input[input_size];

	int base_min;
	int base_max;

	printf(">  Enter the lower number: ");
	fgets(user_input,input_size,stdin);

	base_min = atoi(user_input);

	printf(">  Enter the higher number: ");
	fgets(user_input,input_size,stdin);

	base_max = atoi(user_input);

	for (int b = base_min; b <= base_max; b++)
	{
		printf("\nTable of %d:\n",b);

		for (int m = mult_min; m <= mult_max; m++)
		{
			printf("%2d * %2d = %2d\n",b,m,b*m);
		}
	}

	return 0;
}
