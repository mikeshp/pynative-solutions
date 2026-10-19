/* Exercise 43: File Stats 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>
//#define FILENAME "text.txt"
#define FILENAME "sometext.txt"
//#define BUFFER 1024
int main()
{
	int c_line = 0;
	int c_word = 0;
	int c_char = 0;
	int f_word = 0;
	char current;
//	char content[BUFFER];
	FILE* p_file = fopen(FILENAME,"r");
	if (p_file == NULL) exit(1);
//		c_char = fread(content,1,BUFFER,p_file);
//		content[c_char] = '\0';
		while ((current = fgetc(p_file)) != EOF)
		{
			if ((current >= 'a' && current <= 'z') ||
				(current >= 'A' && current <= 'Z'))
			{
				if (!f_word)
				{
					f_word++;
				}
			}
			else
			{
				if (f_word)
				{
					f_word--;
					c_word++;
				}
			}
			if (current == '\n')
			{
				c_line++;
			}
			c_char++;
		}
	printf("Characters: %4.2d | Words: %4.2d | Lines: %4.2d\n",c_char,c_word,c_line);
	fclose(p_file);
	return 0;
}
