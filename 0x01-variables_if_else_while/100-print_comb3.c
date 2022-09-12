#include <stdio.h>
#include <stdlib.h>
/**
*main - print all 2 digit permutations in putchar
*
* Description: prints all possible different combinations of two digits
* Return: 0;
*/
int main(void)
{
	int i, j;

	for (i = '0'; i <= 9; i++)
	{
		if (i < 9)
		{
			putchar(c);
			putchar(j);

			if (c !=8 || (c == '8' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}



