/* 
 * Exercise 44: Middle Element Of Linked List 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 5

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
//	struct Node list[LENGTH] =
//	{
//		{1,&list[1]},
//		{2,&list[2]},
//		{3,&list[3]},
//		{4,&list[4]},
//		{5,&list[5]},
//		{6,NULL}
//	};

	/* Rewrite with dynamic allocation */

	struct Node *list = NULL;

	/* Implement random length */

	srand(time(NULL));
	int length = (rand() % 25) + 1;

//	for (int i = 0; i < LENGTH; i++)
	for (int i = 0; i < length; i++)
	{
		struct Node *temp = realloc(list,(i + 1) * sizeof(struct Node));
		if (temp == NULL)
		{
			exit(1);
		}
		list = temp;

		list[i].data = i + 1;
		list[i].next = NULL;
		if (i > 0)
		{
			list[i - 1].next = &list[i];
		}
	}

	int slow = 0;
	int fast = 0;

	while (list[fast].next != NULL && list[fast + 1].next != NULL)
	{
		slow = slow + 1;
		fast = fast + 2;
	}

	int middle_data = list[slow].data;

	slow = 0;
	printf("List: ");
	while (list[slow].next != NULL)
	{
		printf("%d -> ",list[slow].data);
		slow++;
	}
	printf("%d\n",list[slow].data);

	printf("Middle node: %d\n",middle_data);

	return 0;
}
