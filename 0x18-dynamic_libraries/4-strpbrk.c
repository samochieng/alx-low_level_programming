#include "main.h"

/**
* _strpbrk -> function that searches a string for any set of bytes
* @s: parameter for target string
* @accept: parameter for set of bytes to be searched for
*
* Return: pointer to the byte if successful and NULL if not
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return (0);
}

