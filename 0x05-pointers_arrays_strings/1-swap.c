#include "main.h"

/**
* swap_int -> function that swaps the values of two integers
* @a: parameter
* @b: parameter
* Return: 0;
*/
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b
}
