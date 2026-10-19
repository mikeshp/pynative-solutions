/* 
 * Exercise 19: Binary Struct Storage 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>

#define DATABASE "students.bin"

struct Student
{
	char name[20];
	int age;
};

struct List
{
	int size;
	struct Student* data;
};

void add_student(struct List*);
void read_students(struct List*);
int file_size(FILE*);

int main()
{
//	struct Student arr_students[2] = {{"Jessa", 20}, {"Kelly", 22}};

//	printf("--- Data in Memory ---\n");
//	for (int i = 0; i < 2; i++)
//	printf("%s, %d y.o.\n", arr_students[i].name, arr_students[i].age);

//	FILE* database = fopen("students.bin", "w");
//	if (database == NULL) exit(1);

//	fwrite(arr_students, sizeof(struct Student), 2, database);
//	printf("List of students written to a database!\n");
//	fclose(database);

//	struct Student* students_read = malloc(2 * sizeof(struct Student));

//	FILE* database_read = fopen("students.bin", "r");
//	if (database_read == NULL) exit(1);

//	fread(students_read, sizeof(struct Student), 2, database_read);
//	printf("Read list of students from the database!\n");
//	fclose(database_read);

//	printf("--- From the Database ---\n");
//	for (int i = 0; i < 2; i++)
//	printf("%s, %d y.o.\n", students_read[i].name, students_read[i].age);

	struct List students;
	students.size = 0;

	int input, clear;
	do
	{
		printf("\n--- Choose your action: ---\n");
		printf("1 - Add a student to the list\n");
		printf("2 - Read the list of students\n");
		printf("0 - Exit program\n");
		printf(">> ");

		scanf(" %d", &input);
		while ((clear = getchar()) != '\n' && clear != EOF);

		if (input != 0)
		switch (input)
		{
			case 1:
				add_student(&students);
				break;
			case 2:
				read_students(&students);
				break;
			default:
				printf("Wrong input!\n");
		}
	}
	while (input != 0);

	printf("\nGood bye!\n");

	if (students.size > 0) free(students.data);

	return 0;
}

int file_size(FILE* file)
{
	fseek(file, 0, SEEK_END);
	int size = ftell(file);
	rewind(file);
	return size;
}

void read_students(struct List* list)
{
	FILE* file = fopen(DATABASE, "rb");
	if (file == NULL) exit(1);

	int filesize = file_size(file);
	list->size = filesize / sizeof(struct Student);

	struct Student* temp =
	realloc(list->data, list->size * sizeof(struct Student));
	if (temp == NULL) exit(1);
	list->data = temp;

	fread(list->data, sizeof(struct Student), list->size, file);

	printf("\n--- Students Database: ---\n");
	for (int i = 0; i < list->size; i++)
	printf("%s, %d y.o.\n", list->data[i].name, list->data[i].age);

	free(list->data);
	list->data = NULL;
	list->size = 0;
	fclose(file);
}

void add_student(struct List* list)
{
	struct Student* temp =
	realloc(list->data, (list->size + 1) * sizeof(struct Student));
	if (temp == NULL) exit(1);
	list->data = temp;

	int clear;

	printf("\n--- New Student Entry: ---\n");
	printf("Name: >> ");
	scanf(" %19s", list->data[list->size].name);
	while ((clear = getchar()) != '\n' && clear != EOF);
	printf("Age: >> ");
	scanf(" %d", &list->data[list->size].age);
	while ((clear = getchar()) != '\n' && clear != EOF);

	list->size++;

	FILE* file = fopen(DATABASE, "ab");
	if (file == NULL) exit(1);

	fwrite(list->data, sizeof(struct Student) * list->size, 1, file);

	printf("New student %s, %d y.o. added to the database!\n",
	list->data->name, list->data->age);

	free(list->data);
	list->data = NULL;
	list->size = 0;
	fclose(file);
}
