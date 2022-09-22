#include "main.h"

/**
* reverse_array -> function that reverses contents of interger array
* @a: array parameter
* @n: parameter for number of elements in array
*/
void reverse_array(int *a, int n)
{
	int index, temp;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}



