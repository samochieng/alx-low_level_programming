#include "main.h"

/**
*print_alphabet_x10 -> prints lowecase alphabet x10
*/
void print_alphabet_x10(void)
{
	int m;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
