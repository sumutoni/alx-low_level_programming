#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - dynamically allocates memory 
 * @b: memory bytes
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		printf("98");
	else
		return i;
}
