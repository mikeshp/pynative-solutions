/* 
 * Exercise 42: Basic Pointer Declaration And Dereference 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
    int num;
    int *p_num;

    num = 42;
    p_num = &num;

    // printf("Value of num: %d\n", ++num);
    printf("Value of num: %d\n", num++);
    printf("Address of num: %p\n", num);
    printf("Address of pointer to num: %p\n", p_num);
    printf("Value got from the pointer: %d\n", *p_num);

    if (num == *p_num) printf("They are equal!\n");
    else printf("They are NOT equal!\n");

    return 0;
}


