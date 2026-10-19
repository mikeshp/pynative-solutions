/* 
 * Exercise 12: Student Database Struct Arrays 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIST_SIZE 3

struct Student
{
	char name[100];
	int roll;
	float gpa;
};

int top_student(struct Student*);
void enter_data(struct Student*);

int main()
{
	struct Student* students = malloc(LIST_SIZE * sizeof(struct Student));

	enter_data(students);

//	strcpy(students[0].name, "Alice");
//	students[0].roll = 101;
//	students[0].gpa = 3.8;
//
//	strcpy(students[1].name, "Bob");
//	students[1].roll = 102;
//	students[1].gpa = 3.9;
//
//	strcpy(students[2].name, "Charlie");
//	students[2].roll = 103;
//	students[2].gpa = 3.5;

	printf("\nThere are %d students in the list:\n", LIST_SIZE);
	for (int i = 0; i < LIST_SIZE; i++)
	printf("Student #%d %s GPA: %.2f\n",
	students[i].roll, students[i].name, students[i].gpa);

	int top = top_student(students);

	printf("\nTop student:\n");
	printf("%s, GPA: %.2f\n",
	students[top].name, students[top].gpa);

	return 0;
}

void enter_data(struct Student* students)
{
	int clear;

	for (int i = 0; i < LIST_SIZE; i++)
	{
		printf("\nEntry %d:\n", i + 1);

		printf("Roll number: >> ");
		scanf(" %d", &students[i].roll);
		while ((clear = getchar()) != '\n' && clear != EOF);

		printf("Name: >> ");
		scanf(" %99s", students[i].name);
		while ((clear = getchar()) != '\n' && clear != EOF);

		printf("GPA: >> ");
		scanf(" %f", &students[i].gpa);
		while ((clear = getchar()) != '\n' && clear != EOF);
	}
}

int top_student(struct Student* students)
{
	int top = 0;

	for (int i = 1; i < LIST_SIZE; i++)
	if (students[i].gpa > students[i - 1].gpa) top = i;

	return top;
}
