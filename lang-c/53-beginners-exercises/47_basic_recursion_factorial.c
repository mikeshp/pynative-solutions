/* PYnative.com C Exercise Solutions
 * 
 * Exercise 47: Basic Recursion Factorial 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int factorial(int);

int main()
{
    int N = 0;
    int factorial_N = 0;

    printf("Give me non negative integer N: ");
    scanf(" %d", &N);

    factorial_N = factorial(N);
    printf("\nN! = %d\n", factorial_N);

    return 0;
}

int factorial(int n)
{
    if (n > 0)
    {
        printf("%d * ", n);
        n *= factorial(n - 1);
        return n;
    }
    else
    {
        printf("0");
        return 1;
    }
}
