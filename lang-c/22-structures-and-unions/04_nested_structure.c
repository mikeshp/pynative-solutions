/* Exercise 04: Nested Structure 
 * https://pynative.com/c-programming-structures-unions-exercises
 */

#include <stdio.h>

struct Date
{
	int day;
	int month;
	int year;
};
struct Employee
{
	int id;
	char name[100];
	struct Date join_day;
};

int main()
{
	struct Employee dude;
	int clear;

	/* Populate employee details */
	printf("Enter Employee ID: ");
	scanf("%d",&dude.id);
	while((clear = getchar()) != '\n' && clear != EOF);
	printf("Enter Employee Name: ");
	scanf("%s",dude.name);
	while((clear = getchar()) != '\n' && clear != EOF);
	printf("Enter Joining Day (DD): ");
	scanf("%d",&dude.join_day.day);
	while((clear = getchar()) != '\n' && clear != EOF);
	printf("Enter Joining Month (MM): ");
	scanf("%d",&dude.join_day.month);
	while((clear = getchar()) != '\n' && clear != EOF);
	printf("Enter Joining Year (YYYY): ");
	scanf("%d",&dude.join_day.year);
	while((clear = getchar()) != '\n' && clear != EOF);

	/* Display employee details */
	printf("\n--- Employee Details: ---\n");
	printf("ID: %.2d\n",dude.id);
	printf("Name: %s\n",dude.name);
	printf("Joining Date: %.2d/%.2d/%.4d\n",dude.join_day.day,dude.join_day.month,dude.join_day.year);

	return 0;
}
