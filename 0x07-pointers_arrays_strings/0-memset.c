#include "main.h"

/**
* _memset -> function that fills memory with a constant byte
* @s: parameter for pointer to n
* @b: parameter for constant bytes
* @n: parameter got bytes of the memory area
*
* Return: pointer to the filled memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
