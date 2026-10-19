/* 
 * Exercise 44.1: 
 * https://pynative.com/intermediate-c-programming-exercises
 */

/* Random list length */
/* No integer pointers, only pointers to nodes */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 20

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	srand(time(NULL));
	int length = (rand() % MAX_LENGTH) + 1;

	struct Node *list = malloc(length * sizeof(struct Node));
	struct Node *node = NULL;

	for (int i = 0; i < length; i++)
	{
		list[i].data = i + 1;
		if (i + 1 < length)
		{
			list[i].next = &list[i + 1];
		}
		else
		{
			list[i].next = NULL;
		}
	}

	struct Node *slow = list;
	struct Node *fast = list;
	while (fast->next != NULL && fast->next->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	int middle = slow->data;

	printf("List:");
	node = list;
	while (node != NULL)
	{
		printf(" -> %d",node->data);
		node = node->next;
	}
	printf("\n");

	printf("Middle Element: %d\n",middle);

	free(list);
	list = NULL;
	slow = NULL;
	fast = NULL;
	node = NULL;		// redundant?

	return 0;
}
