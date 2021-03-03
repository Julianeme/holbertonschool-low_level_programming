#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - returns a pointer to a 2 dimensional array of integers
 *@grid: grid to be freed.
 *@height: height of the matrix
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <  height; i++)
	{
		free(grid[i]);
	}
free(grid);
}
