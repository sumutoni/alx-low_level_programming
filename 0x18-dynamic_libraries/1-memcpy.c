#include "main.h"
#include <string.h>

/**
 * _memcpy - function to n bytes from memory area src to memory area dest
 * @dest: destination memory
 * @src: source memory
 * @n: bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
