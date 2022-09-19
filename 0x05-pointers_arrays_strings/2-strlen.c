#include "main.h"

/**
*_strlen -> function returns the length of a string
*@s: parameter
*Return: length of string
*/
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		*s = *s + 1;
	}
	return (len);
}
