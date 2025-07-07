#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - a function to allocate a grid
* @width: the width of the grid
* @height: the height of the grid
*
* Return: NULL if failed else return the a pointer to the grid
* Note: the user should free the memory
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for(j = 0;j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
