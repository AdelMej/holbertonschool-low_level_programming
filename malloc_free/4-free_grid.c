#include "main.h"
#include <stdlib.h>

/**
* free_grid - a function to free a grid
* @grid: a grid to be freed
* @height: the height of the array
*
* Return: void
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
