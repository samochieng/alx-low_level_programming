#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
* main -> prints the multiplication of 2 intergers
* @argc: argument count
* @argv: argument vector
* Return: 0 if true, 1 if false
*/
int main(int argc, char *argv[])
{
	int index, mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		mult = mult * atoi(argv[index]);
	}
	printf("%d\n", mult);
	return (0);
}

