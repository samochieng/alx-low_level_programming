#include "main.h"
#include "stdlib.h"
#include "stddef.h"

/**
* free_grid -> frees a 2 dimensional grid
* @grid: 2 dimensional grid
* @height: height of grid
*
* Return: free grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
