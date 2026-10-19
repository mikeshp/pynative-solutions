/* PYnative.com C Exercise Solutions
 * 
 * Exercise 46: Compare Pointers 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void input_numbers(int*, int*);
void compare_numbers(int*, int*);

int main()
{
    int A = 0;
    int B = 0;
    // int* p_A = &A;
    // int* p_B = &B;

    input_numbers(&A, &B);
    compare_numbers(&A, &B);

    return 0;
}

void input_numbers(int* a, int* b)
{
    printf("Give me number A: ");
    scanf(" %d", a);
    printf("Give me number B: ");
    scanf(" %d", b);
}

void compare_numbers(int* a, int* b)
{
    if (*a > *b) printf("Number A (%d) is larger!\n", *a);
    else if (*a < *b) printf("Number B (%d) is larger!\n", *b);
    else printf("The numbers are equal!\n");
}
