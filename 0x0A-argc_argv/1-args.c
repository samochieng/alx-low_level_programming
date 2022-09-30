#include "main.h"
#include <stdio.h>

/**
 * main -> prints all the arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0) 
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
