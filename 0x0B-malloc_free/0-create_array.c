#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_array -> function that creates an array of chars
* @size: parameter for size of the array
* @c: parameter for specific char assigned for initialization of array
*
* Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size 8 sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] - c;

	return (s);
}
