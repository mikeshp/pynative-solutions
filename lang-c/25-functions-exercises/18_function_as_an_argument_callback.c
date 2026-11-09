/* 
 * Exercise 18: Function As An Argument Callback 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
int add(int,int);
int sub(int,int);
int operate_on_data(int,int,int(*)(int,int));
int main(void)
{
	int x, *input_x = &x;
	int y, *input_y = &y;

	printf("Enter two numbers (x y): ");
	scanf(" %d %d",input_x,input_y);

	printf("Operation (Add): %d\n",
	operate_on_data(x,y,add));

	printf("Operation (Subtract): %d\n",
	operate_on_data(x,y,sub));

	return 0;
}
int operate_on_data(int x,int y,int(*operation)(int,int))
{
	return operation(x,y);
}
int add(int x,int y)
{
	return x + y;
}
int sub(int x,int y)
{
	return x - y;
}
