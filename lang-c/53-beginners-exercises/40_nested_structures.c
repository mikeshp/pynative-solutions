/* 
 * Exercise 40: Nested Structures 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

struct Date {
	int day;
	int month;
	int year;
};
struct Employee {
	int id;
	char name[100];
	struct Date date_of_joining;
};

void inputEmployeeData(struct Employee*);
void displayEmployeeData(struct Employee*);

int main()
{
	struct Employee emp1;
	
	inputEmployeeData(&emp1);

	displayEmployeeData(&emp1);
	
	return 0;
}

void displayEmployeeData(struct Employee *emp)
{
	printf("--- Employee Record ---\n");
	
	printf("ID: %d\n", emp->id);
	printf("Name: %s\n", emp->name);
	printf("Joning date: %d/%d/%d\n", 
		emp->date_of_joining.day, 
		emp->date_of_joining.month, 
		emp->date_of_joining.year);
}

void inputEmployeeData(struct Employee *emp)
{
	printf("--- Input Employee Data ---\n");

	printf("ID: ");
	scanf(" %d", &emp->id);

	printf("Name: ");
	scanf(" %s", emp->name);
	
	printf("Data of employement (day month year): ");
	scanf(" %d %d %d", 
		&emp->date_of_joining.day, 
		&emp->date_of_joining.month, 
		&emp->date_of_joining.year);

	printf("\n");
}
