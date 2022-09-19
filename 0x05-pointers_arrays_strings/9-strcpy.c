#include "main.h"
#include "stdio.h"

/**
* _strcpy -> function that copies a string
* @dest: parameter 1
* @src: parameter 2
*  Return: the pointer to @dest
*/
char *_strcpy(char *dest, char *src)
{
	int p = 0;

	while (*(src + p) != '\0')
	{
		*(dest + p) = *(src + p);
		p++;
	}
	*(dest + p) = '\0';

	return (dest);
}




