#include "main.h"
#include <string.h>
#include<stdlib.h>

/**
 * _calloc - allocates memory for an array of
 * ints of nmemb elements each with size bytes
 * @nmemb: number of elements of array
 * @size: bytes to allocate to each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	ar = malloc(nmemb  * size);
	if (ar == NULL)
		return (NULL);
	if (size == 0 || nmemb == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ar[i] = 0;
	return (ar);
}
