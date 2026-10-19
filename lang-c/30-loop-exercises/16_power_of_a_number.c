/* Exercise 16: Power Of A Number 
 * https://pynative.com/c-programming-loops-exercises
 */

#include<stdio.h>
void clear_buffer(void)
{
	int c;
	while((c=getchar())!='\n'&&c!=EOF);
}
void get_data(int* input_base,int* input_expo)
{
	printf("> Enter a base number: ");
	while(scanf(" %d",input_base)!=1)
	{
		clear_buffer();
	}
	clear_buffer();
	printf("> Enter the exponent: ");
	while(scanf(" %d",input_expo)!=1)
	{
		clear_buffer();
	}
	clear_buffer();
}
long int power(int base,int expo)
{
	long int result = 1;
	if (expo != 0)
	{
		for (int i=0;i<expo;i++)
		{
			result = result*base;
		}
	}
	return result;
}
void show_result(int base,int expo,long int power)
{
	printf("%d ^ %d = %ld\n",base,expo,power);
}
int main(void)
{
	int base, *input_base = &base;
	int expo, *input_expo = &expo;

	get_data(input_base,input_expo);
	show_result(base,expo,power(base,expo));

	return 0;
}
