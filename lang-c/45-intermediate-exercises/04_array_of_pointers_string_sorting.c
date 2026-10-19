/* Exercise 04: Array Of Pointers String Sorting 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
//#include <string.h>

int string_length(const char[]);
void print_list(const char*[], int);

int main()
{
//	const char* list[] = {"Banana", "Apple", "Watermelon"};
	const char* list[] = {
							"Orange",
							"Plum",
							"Cherry",
							"Grapes",
							"Watermelon",
							"Melon"
										};

	int list_length = sizeof(list) / sizeof(list[0]);

	for (int i = 1; i < list_length; i++)
	{
		const char* temp;
		if (string_length(list[i]) < string_length(list[i - 1]))
		{
			temp = list[i - 1];
			list[i - 1] = list[i];
			list[i] = temp;
		}
	}

	print_list(list, list_length);
	printf("The shortest string: %s\n", list[0]);
	printf("The longest string: %s\n", list[list_length - 1]);

	return 0;
}

void print_list(const char* list[], int length)
{
	printf("The ordered list:");
	for (int i = 0; i < length; i++) printf(" %s", list[i]);
	printf("\n");
}

int string_length(const char string[])
{
	int i = 0;
	while (string[i] != '\0') i++;
	return i;
}
