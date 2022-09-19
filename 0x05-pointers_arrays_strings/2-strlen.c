#include "main.h"
#include <string.h>

/**
*_strlen -> function returns the length of a string
*@s: parameter
*Return: length of string
*/
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len = len + 1;
	}
	return (len);
}
