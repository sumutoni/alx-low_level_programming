#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates new memory to existing pointer
 * @ptr: exisiting pointer
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: pointer to new reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else
	{
		ptr = realloc(ptr, new_size);
		return (ptr);
	}

}
