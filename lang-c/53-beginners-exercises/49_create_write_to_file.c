/* Exercise 49: Create Write To File 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void get_personal_data(char[], int*);
void write_data_into_file(char[], char[], int*);

int main()
{
	char file_name[16] = "data.txt";
	char name[100] = "Mike";
	int age = 41;

	get_personal_data(name, &age);
	write_data_into_file(file_name, name, &age);

	return 0;
}

void write_data_into_file(char file_name[], char name[], int* age)
{
	FILE *file;
	file = fopen(file_name, "a");

	printf("Storing your personal data into %s...\n", file_name);

	fprintf(file, "Name: %s\n", name);
	fprintf(file, "Age: %d years\n", *age);

	fclose(file);

	printf("Your personal data has been stored, %s!\n", name);
}

void get_personal_data(char name[], int* age)
{
	printf("What is your name? >> ");
	scanf(" %s", name);

	printf("What is your age, %s? >> ", name);
	scanf(" %d", age);
}
