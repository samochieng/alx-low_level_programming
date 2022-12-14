#include "main.h"

/**
* _strspn -> function that gets the lnght of a prefix substring
* @s: parameter for target string
* @accept: parameter for searching string
*
* Return: no. of bytes in the initia segement of string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}

