#include "stdio.h"
#include "main.h"

/**
* print_array -> prints n elements of an array of intergers
* @a: parameter
* @n: parameter
*/
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		if (p != n - 1)
			printf("%d, ", a[p]);
		else
			printf("%d", a[p]);
	}
	printf("\n");
}

