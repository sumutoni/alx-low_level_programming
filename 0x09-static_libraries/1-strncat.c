#include "main.h"
#include <string.h>

/**
 * _strncat - function to concatenate bytes of
 * a string into another
 * @dest: destination string
 * @src: source string
 * @n: bytes of src to copy
 *
 * Return: pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
