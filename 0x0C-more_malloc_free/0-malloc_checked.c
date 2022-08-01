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
	void *status;
	int val;

	i = malloc(b);
	val = 98;
	*status =(void *)&val;
	if (i == NULL)
	{
		_putchar('9');
		_putchar('8');
		return status;
	}
	else
		return i;
}
