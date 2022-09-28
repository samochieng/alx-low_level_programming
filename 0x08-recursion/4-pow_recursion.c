#include "main.h"

/**
* _pow_recursion -> returns the value of x raised to the power of y
* @x: parameter for number to be raised
* @y: parameter for superscript/power
*
* Return: if y<0 return -1, if y>0 return 1
*/
int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	power *= _pow_recursion(x, y - 1);

	return (power);
}
