#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create an array containing values from min to max,
 * both included
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i, counter;
	int *ar;

	if (min > max)
		return (NULL);
	counter = 0;
	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ar[counter] = i;
		counter++;
	}
	return (ar);
}
