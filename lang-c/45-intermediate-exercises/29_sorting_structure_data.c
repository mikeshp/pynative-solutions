/* PYnative.com C Exercise Solutions
 * 
 * Exercise 29: Sorting Structure Data 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <string.h>

#define SIZE 3

struct Employee
{
	char name[20];
	int salary;
};

void sort_by_salary(struct Employee*, int);
void sort_by_name(struct Employee*, int);

int main()
{
	int size = SIZE;
	struct Employee list[SIZE] = {
		{"John", 50000},
		{"Alice", 75000},
		{"Bob", 45000}
	};

	printf("List of employees (before sorting):\n");
	for (int i = 0; i < size; i++)
	printf("%s: %d\n", list[i].name, list[i].salary);

	sort_by_salary(list, size);

	printf("List of employees (sorted by salary):\n");
	for (int i = 0; i < size; i++)
	printf("%s: %d\n", list[i].name, list[i].salary);

	sort_by_name(list, size);

	printf("List of employees (sorted by name):\n");
	for (int i = 0; i < size; i++)
	printf("%s: %d\n", list[i].name, list[i].salary);

	return 0;
}

void sort_by_name(struct Employee* list, int size)
{
	struct Employee temp;
	for (int i = 0; i < (size - 1); i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(list[min].name, list[j].name) > 0) min = j;
		}
		if (min != i)
		{
			temp = list[min];
			list[min] = list[i];
			list[i] = temp;
		}
	}
}

void sort_by_salary(struct Employee* list, int size)
{
	struct Employee temp;
	for (int i = 0; i < (size - 1); i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (list[min].salary > list[j].salary) min = j;
		}
		if (min != i)
		{
			temp = list[min];
			list[min] = list[i];
			list[i] = temp;
		}
	}
}
