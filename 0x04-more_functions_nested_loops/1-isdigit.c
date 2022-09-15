#include "main.h"

/**
* _isdigit - checks for digit values between 0 and 9
*@c: character to be tested
*Return: 1 if true & 0 otherwise
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
