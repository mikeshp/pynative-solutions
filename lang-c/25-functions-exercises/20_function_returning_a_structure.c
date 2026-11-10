/* 
 * Exercise 20: Function Returning A Structure 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
struct Complex
{
	float real;
	float imag;
};
struct Complex get_complex(char);
struct Complex add_complex(struct Complex,struct Complex);
int main(void)
{
	struct Complex comp_a;
	struct Complex comp_b;
	struct Complex result;

	comp_a = get_complex('A');
	comp_b = get_complex('B');
	result = add_complex(comp_a,comp_b);

	printf("Sum of real parts: %.2f\n",result.real);
	printf("Sum of imaginary parts: %.2f\n",result.imag);

	return 0;
}
struct Complex add_complex(struct Complex comp_a, struct Complex comp_b)
{
	struct Complex comp_temp;

	comp_temp.real = comp_a.real + comp_b.real;
	comp_temp.imag = comp_a.imag + comp_b.imag;

	return comp_temp;
}
struct Complex get_complex(char letter)
{
	struct Complex comp_temp;

	printf("Enter real number %c: ",letter);
	scanf(" %f",&comp_temp.real);

	printf("Enter imaginary number %c: ",letter);
	scanf(" %f",&comp_temp.imag);

	return comp_temp;
}
