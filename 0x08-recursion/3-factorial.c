#include "main.h"

/**
* factorial -> returns factorial of a given number
* @n: parameter
*
* Return: if n>0 return factorial of n, if n<0, -1 for error
*/
int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

