#include "main.h"

/**
* _strcmp -> function that compares 2 strings
* @s1: parameter
* @s2: parameter
* Return: 0 if s1 & s2 are equal
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int p = 0;

	while (p == 0)
	{
		if (*(s1 + i) == '\0') &&(*(s2 + i) == '\0')

			break;

		p = *(s1 + i) - *(s2 + i)

		i++
	}
	return (p);
}

