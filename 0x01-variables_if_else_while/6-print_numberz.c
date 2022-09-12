#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*
* Description: prints all single digit intergers using putchar
* Return: 0;
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
