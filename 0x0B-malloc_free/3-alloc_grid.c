#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array of int
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to a 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc (sizeof(height * sizeof(int *)));
	for (i = 0; i < height; i++)
		array[i] = malloc(width * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0 ; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
