/* 
 * Exercise 38: Basic Student Record 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

struct Student {
	char name[100];
	int roll_number;
	float percentage;
};
	
void printStruct(struct Student*);

int main()
{
	struct Student new_student;
	struct Student *p_student = &new_student;
	
	printf("Name: ");
	scanf("%s", new_student.name);
	printf("Roll number: ");
	scanf("%d", &new_student.roll_number);
	printf("Percentage: ");
	scanf("%f", &new_student.percentage);

	printf("\n");
	
	printStruct(p_student);
	
	//printf("New student name: %s\n", p_student->name);
	//printf("New student roll number: %d\n", p_student->roll_number);
	//printf("New student percentage: %.2f%%\n", p_student->percentage);
	
	
	return 0;
}

void printStruct(struct Student *student)
{
	printf("New student name: %s\n", student->name);
	printf("New student roll number: %d\n", student->roll_number);
	printf("New student percentage: %.2f%%\n", student->percentage);
}
