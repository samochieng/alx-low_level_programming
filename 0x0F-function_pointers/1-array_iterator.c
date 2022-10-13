#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
* array_iterator -> runs function given as a parameter array element
* @array: the array
* @size: size of the array
* @action: pointer to the function
*
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
