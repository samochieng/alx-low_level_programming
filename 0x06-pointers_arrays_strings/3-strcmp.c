#include "main.h"

/**
* _strcmp -> function that compares 2 strings
* @s1: parameter
* @s2: parameter
* Return: 0 if s1 & s2 are equal
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

