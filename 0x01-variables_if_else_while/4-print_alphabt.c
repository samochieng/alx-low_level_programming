#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*
*Description: using main prints the alphabet in lowercase except q and e
*Return: 0;
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}


