#include "main.h"

/**
* *_strncat -> function to concatenate two strings
* @dest: parameter
* @src: parameter
* @n: parameter for bytes from src
* Return: pointer resulting to string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 < n)
	{
		*(dest + count) = *(src + count2);

		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

