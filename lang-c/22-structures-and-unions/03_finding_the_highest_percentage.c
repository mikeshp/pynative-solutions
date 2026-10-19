/* 
 * Exercise 03: Finding The Highest Percentage 
 * https://pynative.com/c-programming-structures-unions-exercises
 */

#include <stdio.h>
#define NUMBER 3
struct Student
{
	char  name[32];
	int   roll;
	float percentage;
};
void clear_buffer()
{
	int clear;
	while ((clear = getchar()) != '\n' && clear != EOF);
}
void enter_students_data(struct Student* students, int number)
{
	for (int i = 0; i < number; i++)
	{
		printf("Enter details for student %d\n",i + 1);
		printf("--> Name: ");
		scanf(" %s",&students[i].name);
		clear_buffer();
		printf("--> Roll number: ");
		scanf(" %d",&students[i].roll);
		clear_buffer();
		printf("--> Percentage: ");
		scanf(" %f",&students[i].percentage);
		clear_buffer();
	}
}
int find_highest_percentage(struct Student* students, int number)
{
	int highest_index = 0;
	for (int i = 1; i < number; i++)
	{
		if (students[i].percentage > students[highest_index].percentage)
		{
			highest_index = i;
		}
	}
	return highest_index;
}
int main()
{
	struct Student students[NUMBER];
	int highest_index;

	enter_students_data(students,NUMBER);
	highest_index = find_highest_percentage(students,NUMBER);

	printf("\n--- Student with the highest percentage: ---\n");
	printf("Name: %s\n",students[highest_index].name);
	printf("Percentage: %.2f\n",students[highest_index].percentage);

	return 0;
}
