/* 
 * Exercise 10: Global Variable And Scope 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
int global_counter = 0;
void update_global_counter(void)
{
	global_counter++;
	printf("Inside function: Global counter updated to %d\n",global_counter);
}
int main(void)
{
	printf("In main: Initial global counter = %d\n",global_counter);
	update_global_counter();
	update_global_counter();
	printf("In main: Final global counter = %d\n",global_counter);

	return 0;
}
