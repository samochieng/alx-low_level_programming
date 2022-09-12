#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*
*Description: using main prints all lowecase letters
*Return: 0
*/
int main(void)
{
	char ch = 'a';
	char ch = 'z';

	while(ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
		putchar ('\n');

		return (0);
}

