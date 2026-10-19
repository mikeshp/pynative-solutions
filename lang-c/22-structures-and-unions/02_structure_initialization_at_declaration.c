/* Exercise 02: Structure Initialization At Declaration 
 * https://pynative.com/c-programming-structures-unions-exercises
 */

#include <stdio.h>
struct Book
{
	char  title[32];
	char  author[32];
	int   pages;
	float price;
};
int main()
{
	struct Book new_book = {
		"The C Programming Language",
		"Dennis Ritchie",
		272,
		12.5
	};

	printf("\n--- Book Details: ---\n");
	printf("Title:\t%s\n",new_book.title);
	printf("Author:\t%s\n",new_book.author);
	printf("Pages:\t%d\n",new_book.pages);
	printf("Price:\t%.2f\n",new_book.price);

	return 0;
}
