/* Exercise 21: Linked List Search 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int index;
	int data;
	struct Node* next;
};

void add_nodes(struct Node**, int);
void display_list(struct Node*);
void free_list(struct Node*);
void update_indexes(struct Node*);
int key_search(struct Node*, int);

int main()
{
	struct Node* head = malloc(sizeof(struct Node));
	if (head == NULL) exit(1);

	head->index = 1;
	head->data = 5;
	head->next = NULL;

	add_nodes(&head, 5);	//index shift

	int key = 15;
	int key_found_index = key_search(head, key);

	printf("Current list:\n");
	display_list(head);
	printf("Search key: %d\n", key);

	if (key_found_index)
	printf("Key value found at Node#%d\n", key_found_index);
	else
	printf("Key value wasn't found!\n");

	free_list(head);
	return 0;
}

int key_search(struct Node* head, int key)
{
	if (head->data == key)
	return head->index;
	if (head->next == NULL)
	return 0;
	return key_search(head->next, key);
}

void free_list(struct Node* head)
{
	if (head->next != NULL)
	free_list(head->next);
	free(head);
	head = NULL;
}

void display_list(struct Node* head)
{
	printf("Node#%d -> %d\n", head->index, head->data);
	if (head->next != NULL)
	display_list(head->next);
}

void add_nodes(struct Node** head, int number)
{
	for (int i = 0; i < number; i++)
	{
		struct Node* temp = malloc(sizeof(struct Node));
		if (temp == NULL) exit(1);

		temp->index = (*head)->index;
		temp->data = (*head)->data + 10;
		temp->next = *head;
		update_indexes(*head);
		(*head)->index++;
		*head = temp;
	}
}

void update_indexes(struct Node* head)
{
	if (head->next != NULL)
	{
		head->next->index++;
		update_indexes(head->next);
	}
}
