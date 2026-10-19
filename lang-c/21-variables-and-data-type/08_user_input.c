/* Exercise 08: User Input 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

void input_user_data(int*, char[]);
void display_user_data(int, char[]);

int main()
{
	int age;
	char name[30];

	input_user_data(&age, name);
	display_user_data(age, name);

	return 0;
}

void display_user_data(int age, char name[])
{
	printf("----User data:----\n");
	printf("Name: %s\n", name);
	printf("Age: %d\n", age);
}

void input_user_data(int *age, char name[])
{
	printf("What is your name?\n");
	scanf(" %s", name);
	printf("How old are you, %s\n", name);
	scanf(" %d", age);
}
