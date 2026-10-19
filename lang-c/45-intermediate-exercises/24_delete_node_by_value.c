/* Exercise 24: Delete Node By Value 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>

#define LINK_LENGTH 6
//#define DATA_REMOVE 20
//#define DATA_REMOVE 40
#define DATA_REMOVE 99

struct Node
{
	int data;
	struct Node* next;
};

void occupy_link(struct Node**, int);
void display_link(struct Node*);
void free_link(struct Node**);
void remove_node(struct Node**, int);

int main()
{
	struct Node* link = malloc(sizeof(struct Node));
	if (link == NULL) exit(1);
	link->data = 10;
	link->next = NULL;

	occupy_link(&link, LINK_LENGTH - 1);

	printf("Current link:");
	display_link(link);
	printf("\n");

	remove_node(&link, DATA_REMOVE);

	printf("After deletion %d:", DATA_REMOVE);
	display_link(link);
	printf("\n");

	free_link(&link);
	return 0;
}

void remove_node(struct Node** p_link, int remove_data)
{
	if ((*p_link)->next == NULL)
	{
		if ((*p_link)->data == remove_data)
		free(*p_link), *p_link = NULL;
		else
		printf("Wrong data passed!\n");
	}
	else
	if ((*p_link)->next->data != remove_data)
	remove_node(&(*p_link)->next, remove_data);
	else
	{
		struct Node* temp = (*p_link)->next;
		(*p_link)->next = (*p_link)->next->next;
		free(temp), temp = NULL;
	}
}

void free_link(struct Node** p_link)
{
	if ((*p_link)->next != NULL) free_link(&(*p_link)->next);
	free(*p_link), *p_link == NULL;
}

void display_link(struct Node* link)
{
	printf(" %d", link->data);
	if (link->next != NULL) display_link(link->next);
}

void occupy_link(struct Node** p_link, int number)
{
	if ((*p_link)->next != NULL)
	occupy_link(&(*p_link)->next, number);
	else
	{
		struct Node* new_node = malloc(sizeof(struct Node));
		if (new_node == NULL) exit(1);

		new_node->data = (*p_link)->data + 10;
		new_node->next = NULL;

		(*p_link)->next = new_node;

		if (number > 1) occupy_link(&new_node, number - 1);
	}
}
