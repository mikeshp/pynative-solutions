/* 
 * Exercise 22: Stack Array Based 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

struct Stack
{
	int top;
	int stack[5];
};

void push(struct Stack*, int);

int main()
{
	struct Stack stack = {-1, {0}};

	push(&stack, 50);

	printf("Before push: top index = %d, value = %d\n",
	stack.top, stack.stack[stack.top]);

	push(&stack, 100);

	printf("After push: top index = %d, value = %d\n",
	stack.top, stack.stack[stack.top]);

	return 0;
}

void push(struct Stack* stack, int value)
{
	if (stack->top < 4)
	stack->stack[++(stack->top)] = value;
	else
	printf("Can't push further!\n");
}
