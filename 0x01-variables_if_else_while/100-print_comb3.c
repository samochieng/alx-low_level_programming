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
	int i,j

	for (i = 1; i <= 2; i++)
	{
		putchar(i);
	}
	for (j = 1; j <= 2; j++)
	{
		putchar(j);
	}
		putchar(',');
		putchar(' ');
		putchar('\n');
		return (0);
}



