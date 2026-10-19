/* 
 * Exercise 39: Array Of Structures 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

struct Student
{
	char name[100];
	int roll_number;
	float marks;
};

void printStudents(struct Student[], int);
void inputStudents(struct Student[], int);
void inputNumberOfStudents(int*);

int main()
{
	int number_of_students = 0;
	
	inputNumberOfStudents(&number_of_students);
	
	struct Student class[number_of_students];
	
	inputStudents(class, number_of_students);
	
	printStudents(class, number_of_students);
	
	
	return 0;
}

void inputStudents(struct Student class[], int number)
{
	int i;
	for (i = 0; i < number; i++)
	{
		printf("--- Enter Data for Student %d ---\n", i + 1);
		
		printf("Name: ");
		scanf(" %s", class[i].name);
		printf("Roll Number: ");
		scanf(" %d", &class[i].roll_number);
		printf("Marks: ");
		scanf(" %f", &class[i].marks);
	}
}

void inputNumberOfStudents(int *number)
{
	printf("--- Creating List of Students ---\n");
	printf("How many students in the class?\n");
	scanf(" %d", number);
}

void printStudents(struct Student class[], int number)
{
	printf("--- All Student Records ---\n");
	
	int i;
	for (i = 0; i < number; i++)
	{
		printf(
		"Student %d: Name = %s, Roll Number = %d, Marks = %.2f\n",
		i + 1, class[i].name, class[i].roll_number, 
		class[i].marks);
	}
}
