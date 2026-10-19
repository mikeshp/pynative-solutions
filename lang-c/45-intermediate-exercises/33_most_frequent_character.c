/* 
 * Exercise 33: Most Frequent Character 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

int main()
{
//	char string[] = "success";
	char string[] = "mamma mia!";
	int hash[256] = {0};
	int pointer = 0;
	char winner = 0;

	//populate hash
	while (string[pointer] != '\0')
	{
		hash[string[pointer]]++;
		pointer++;
	}

	//iterate through hash to find the highest value
	for (pointer = 0; pointer < 256; pointer++)
	{
		if (hash[pointer] > hash[winner])
		{
			winner = pointer;
		}
	}

	printf("String: %s\n", string);
	printf("Most frequent: \'%c\' (appears %d times)\n", winner,hash[winner]);

	return 0;
}
