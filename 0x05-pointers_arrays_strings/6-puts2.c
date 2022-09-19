#include "main.h"
#include "string.h"

/**
* puts2 -> function that prints evry other character of a string
* @str: parameter
*/
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


