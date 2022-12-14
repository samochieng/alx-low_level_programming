#include "main.h"

/**
*_isalpha -> checks if alphabet is lowercase or uppercase
*@c: The character to print
*Return: 0 0r 1 depending on condition
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


