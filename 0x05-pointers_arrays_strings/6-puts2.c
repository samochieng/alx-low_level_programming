#include "main.h"

/**
* puts2 -> function that prints evry other character of a string
* @str: parameter
*/
void puts2(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)

			_putchar(*(str + 1));

		i++;
	}
	_putchar('\n');
}


