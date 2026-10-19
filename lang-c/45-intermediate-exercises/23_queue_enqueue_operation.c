/* PYnative.com C Exercise Solutions
 * 
 * Exercise 23: Queue Enqueue Operation 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

void enque_node(struct Node**, int);
void free_nodes(struct Node*);

int main()
{
	struct Node* rear = malloc(sizeof(struct Node));
	if (rear == NULL) exit(1);

	rear->data = 10;
	rear->next = NULL;

	struct Node* front = rear;

	printf("Before: Front = %d, Rear = %d\n", front->data, rear->data);

	enque_node(&rear, 1);
	printf("After 1: Front = %d, Rear = %d\n", front->data, rear->data);

	enque_node(&rear, 3);
	printf("After 3: Front = %d, Rear = %d\n", front->data, rear->data);

	free_nodes(front);
	return 0;
}

void free_nodes(struct Node* front)
{
	if (front->next != NULL)
	free_nodes(front->next);
	free(front), front = NULL;
}

void enque_node(struct Node** p_rear, int number)
{
	struct Node* new_node = malloc(sizeof(struct Node));
	if (new_node == NULL) exit(1);

	new_node->data = (*p_rear)->data + 10;
	new_node->next = NULL;
	(*p_rear)->next = new_node;
	*p_rear = new_node;

	if (number > 1)
	enque_node(p_rear, number - 1);
}
