/* 
 * Exercise 16: Union Vs Structs Memory Sharing 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

union Data
{
	int integer;
	float floater;
};

int main()
{
	union Data data;

	data.integer = 42;

	printf("Integer value (assigned): %d\n", data.integer);
	printf("Floater value: %f\n", data.floater);

	data.floater = 24.00;

	printf("Floater value (assigned): %.2f\n", data.floater);
	printf("Integer value: %d\n", data.integer);

	return 0;
}
