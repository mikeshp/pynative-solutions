/* 
 * Exercise 20: Singly Linked List Insertion At Head 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

void display_list(struct Node**);
void insert_number(struct Node**);
void free_list(struct Node**);
int list_size(struct Node**);

int main()
{
	struct Node* head = malloc(sizeof(struct Node));
	if (head == NULL) exit(1);

	head->data = 10;
	head->next = NULL;

	int input, clear;
	do
	{
		printf("Current list:");
		display_list(&head);
		printf("\nHead data: %d\n", head->data);

		printf("\n1 - insert a number\n");
		printf("0 - exit program\n");
		printf(">> ");

		scanf(" %d", &input);
		while ((clear = getchar()) != '\n' && clear != EOF);

		if (input != 0)
		switch (input)
		{
			case 1:
				insert_number(&head);
				break;
			default:
				printf("Wrong input!\n");
		}
	}
	while (input != 0);

//	while (head->next != NULL)
//	{
//		struct Node* temp = head;
//		head = head->next;
//		free(temp);
//	}
//	free(head);

	free_list(&head);

	return 0;
}

int list_size(struct Node** head)
{
	if ((*head)->next == NULL) return 1;
	return 1 + list_size(&(*head)->next);
}

void free_list(struct Node** head)
{
	if ((*head)->next != NULL)
	free_list(&(*head)->next);
	free(*head);
}

void insert_number(struct Node** head)
{
	struct Node* temp = malloc(sizeof(struct Node));
	if (temp == NULL) exit(1);

	int size = list_size(head);
	temp->data = (size + 1) * 10;
	temp->next = *head;
	*head = temp;
}

void display_list(struct Node** head)
{
	printf(" %d", (*head)->data);
	if ((*head)->next != NULL)
	display_list(&(*head)->next);
}
