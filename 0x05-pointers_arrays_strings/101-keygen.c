#include "main.h"
#include "stdlib.h"
#include "time.h"
#include "stdio.h"

/**
*main -> entry point
*
*Return: generated password
*/
int main(void)
{
	char c;
	int x;

	srand(time(0));

	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		_putchar(c);
	}
	_putchar(2772 - x);

	return (0);
}
