#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char and initializes it with a specific char
 * @size: size to allocate to array
 * @c: char to intialize to array
 *
 * Return: pointer to array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	else
		for (i = 0; i < (int)size; i++)
			ar[i] = c;
	return (ar);
}
