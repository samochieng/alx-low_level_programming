#include "main.h"

/**
* *_strcat -> function to concatenate the string
* @dest: parameter
* @src: parameter
* Return: pointer to the value of string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

