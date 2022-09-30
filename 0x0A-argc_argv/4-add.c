#include "stdio.h"
#include "stdlib.h"

/**
* main -> adds two positve numbers
* @argc: argument counter
* @argv: argument vector
*
* Return: 0;
*/
int main(int argc, int *argv[])
{
	int num, dig, sum = 0;

		for (num = 1; num < argc; num++)
		{
			for (dig = 0; argv[num][dig]; dig++)
			{
				if (argv[num][dig] < '0' || argv[num][dig] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
