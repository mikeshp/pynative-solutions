/* 
 * Exercise 19: Function Returning A Pointer 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
#include <stdlib.h>
int* create_int(int value)
{
	int* temp = (int*)malloc(sizeof(int));
	if  (temp == NULL) exit(1);

	*temp = value;

	return temp;
}
int main(void)
{
	int value, *input_value = &value;

	printf("Enter some value: ");
	scanf(" %d",input_value);

	int* point = create_int(value);

	printf("The new pointer contains the value: %d\n",*point);

	return 0;
}
