#include "main.h"

/**
* _strchr -> function that locates a character in a string
* @s: parameter for pointer to 1st occurence of character in string
* @c: parameter for occurence of character
*
* Return: pointer to 1st character if successful and NULL if not
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
