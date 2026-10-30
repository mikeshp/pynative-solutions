/* 
 * Exercise 09: Static Local Variable Lifetime 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
void test_static_scope(void)
{
	static int count = 1;
//	int count = 1;	// will print equivalent result each time
	printf("Retained value: %d\n",count);
	count++;
	printf("After increment: %d\n",count);
}
int main(void)
{
	printf("\n--- %s ---\n","First Call");
	test_static_scope();

	printf("\n--- %s ---\n","Second Call");
	test_static_scope();

	printf("\n--- %s ---\n","Third Call");
	test_static_scope();

	return 0;
}
