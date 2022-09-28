#include "main.h"

/**
* find_sqrt -> Finds the natural square root of an inputted number
* @num: The number to find the square root of
* @root: The root to be tested.
*
* Return: the square root or -1 if does not have a natural square root
*
*/

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

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

