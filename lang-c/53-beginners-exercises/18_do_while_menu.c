/* Exercise 18: Do While Menu 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	int choice;
	
	do {
		//printf("\033[H\033[J");
		printf("1. Greet\n2. Say Goodbye\n3. Exit\n\n");
		
		printf("Select your choice (1-3):\n");
		scanf(" %d", &choice);
		printf("\n");
		
		switch (choice)
		{
			case 1:
				printf("You have selected 1 - Greetings!\n");
				break;
			case 2:
				printf("You have selected 2 - Good bye!\n");
				break;
			case 3:
				printf("You have selected 3 - Exit!\n");
				break;
			default:
				printf("Wrong input!\n");
		}
	} while (choice != 3);
	
	
	return 0;
}
