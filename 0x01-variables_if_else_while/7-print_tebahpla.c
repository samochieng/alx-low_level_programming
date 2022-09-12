#include <stdio.h>
#include <stdlib.h>
/**
*main - prints using putchar
*
* Description: print all lowecase letters in reverse using main
* Return: 0;
*/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n')
		return (0);
}
