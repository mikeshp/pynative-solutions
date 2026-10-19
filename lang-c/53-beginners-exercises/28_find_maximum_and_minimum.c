/* Exercise 28: Find Maximum And Minimum 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int arr[6] = {55, 12, 89, 7, 42, 60};
	int min = arr[0];
	int max = arr[0];
	int i;
	
	printf("Given the array of numbers:");
	for (i = 0; i < 6; i++) printf(" %d", arr[i]);
	
	for (i = 1; i < 6; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	
	printf("\nMaximum value: %d", max);
	printf("\nMinimum value: %d", min);
	
	return 0;
}
