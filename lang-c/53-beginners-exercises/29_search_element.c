/* PYnative.com C Exercise Solutions
 * 
 * Exercise 29: Search Element 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int arr[5] = {10, 25, 30, 45, 50};
	int key, index, i;
	int f_keyFound = 0;
	
	printf("Key to search:\n");
	scanf(" %d", &key);
	
	for (i = 0; i < 5; i++)
	{
		if (arr[i] == key)
		{
			index = i;
			f_keyFound = 1;
			break;
		}
	}
	
	if (f_keyFound == 0) printf("Key %d not found!\n", key);
	else printf("Key %d found at index %d!\n", key, index);
	
	return 0;
}
