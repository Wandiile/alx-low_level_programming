#include <stdio.h>
#include <stdlib.h>
#include "main"
/**
* free_grid - frees 2d array
* @grid: 2d grid
* @height: height dimension
* Description: frees memory of the grid
* Return: nothing
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
