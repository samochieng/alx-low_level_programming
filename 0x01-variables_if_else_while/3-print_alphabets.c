#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*
* Description: using main prints uppercase and lowercase letters
* Return: 0;
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

		return (0);
	}
