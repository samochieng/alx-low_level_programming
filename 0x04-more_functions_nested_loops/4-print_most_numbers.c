#include "main.h"

/**
*print_most_numbers - print numbers except 2 & 4
*
*/
void print_most_numbers(void)
{
	for (n = 48; n < 58; n++)
	{
		if ((n != 50) || (n != 52))
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
