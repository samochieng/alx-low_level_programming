#include "main.h"
#include <string.h>

/**
*_strlen -> function returns the length of a string
*@s: parameter
*Return: length of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
