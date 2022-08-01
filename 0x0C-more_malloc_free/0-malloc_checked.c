#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - dynamically allocates memory
 * @b: memory bytes
 *
 * Return: void pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
	{
		free(i);
		exit(98);
	}
	return (i);
}
