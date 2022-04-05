#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - free the 2-d array of int created by alloc_grid
* @height: type int height.
* @grid: type int char
* Return: Null if 0 or negative.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
