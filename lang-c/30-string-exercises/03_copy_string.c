/* PYnative.com C Exercise Solutions
 * 
 * Exercise 03: Copy String 
 * https://pynative.com/c-programming-string-exercises
 */

#include <stdio.h>
#define STR_BUFFER 100
void copy_str(char*,char*);
int main()
{
//	char source[] = "Cope Me!";
	char source[] = "And now me, also, copy!";
	char destination[STR_BUFFER];
	copy_str(destination,source);
	printf("Source: %s\n",source);
	printf("Destination: %s\n",destination);
	return 0;
}
void copy_str(char* dest,char* source)
{
	int pointer = 0;
	while (pointer < STR_BUFFER)
	{
		if (source[pointer] == '\0')
		{
			dest[pointer] = '\0';
			break;
		}
		dest[pointer] = source[pointer];
		pointer++;
	}
}
