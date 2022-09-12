#include <stdio.h>
#include <stdlib.h>
/**
*main - print all hexadecimal numbers
*
* Description: prints all the numbers of base 16 in lowercase
* Return: 0;
*/
int main(void)
{
	char ch;
	char k = '0';

	while (k <= 9)
	{
		putchar(k);
		k++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
