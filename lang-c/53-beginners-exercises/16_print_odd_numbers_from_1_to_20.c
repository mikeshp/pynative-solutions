/* Exercise 16: Print Odd Numbers From 1 To 20 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	printf("Odd numbers from 1 to 20 be like:\n");
	
	int i = 1;
	do {
		printf("%d ", i);
		i += 2;
	} while (i <= 20);
	
	printf("\n");
	
	return 0;
}
