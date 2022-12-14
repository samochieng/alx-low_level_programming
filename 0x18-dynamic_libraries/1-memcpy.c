#include "main.h"

/**
* _memcpy -> function that copies the memory area
* @dest: parameter for memory area copied to
* @src: parameter for initial memory area copied from
* @n: bytes from the memory area
*
* Return: pointer to dest(momory area copied to)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
