/* Exercise 01: Define And Display A Student Structure 
 * https://pynative.com/c-programming-structures-unions-exercises
 */

#include <stdio.h>
struct Student
{
	char name[32];
	int roll_number;
	float percentage;
};
void clear_buffer()
{
	int clear;
	while ((clear = getchar()) != '\n' && clear != EOF);
}
int main()
{
	struct Student new_student;

	printf("Enter student name: ");
	scanf(" %s",&new_student.name);
	clear_buffer();
	printf("Enter roll number: ");
	scanf(" %d",&new_student.roll_number);
	clear_buffer();
	printf("Enter percentage: ");
	scanf(" %f",&new_student.percentage);

	printf("\n--- Student Details: ---\n");
	printf("Name: %s\n",new_student.name);
	printf("Roll Number: %d\n",new_student.roll_number);
	printf("Percentage: %.2f%\n",new_student.percentage);

	return 0;
}
