#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
* main -> prints all the arguments it receives
* @argc: argument counter
* @argv: argument vector
* Return: 0;
*/
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}

