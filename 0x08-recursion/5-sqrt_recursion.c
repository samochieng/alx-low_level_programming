#include "main.h"

/**
* _sqrt_recursion -> returns the natural square root of a number
* @n: parameter to be square-rooted
*
* Return: square root of n or -1 if n does not have natural square root
*/
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (find_sqrt(n, root));
}

