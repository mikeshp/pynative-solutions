/* Exercise 13: Complex Number Arithmetics Returning Structs 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

typedef struct
{
	float real;
	float imag;
} Complex;

Complex add_complex(Complex, Complex);

int main()
{
	Complex complex_1 = {3.0, 4.0};
	Complex complex_2 = {1.0, 2.0};

	Complex complex_3 = add_complex(complex_1, complex_2);

	printf("Adding: (%.1f + %.1fi) + (%.1f + %.1fi)\n",
	complex_1.real, complex_1.imag, complex_2.real, complex_2.imag);

	printf("Result: %.1f + %.1fi\n", complex_3.real, complex_3.imag);

	return 0;
}

Complex add_complex(Complex complex_1, Complex complex_2)
{
	Complex complex_summ =
	{complex_1.real + complex_2.real, complex_1.imag + complex_2.imag};

	return complex_summ;
}
