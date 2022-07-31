#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_grid: function free 2D array of ints
 * @grid: array of ints
 * @height: numbers of rows
 */
void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
		else
			break;
	}
	free(grid);
}
