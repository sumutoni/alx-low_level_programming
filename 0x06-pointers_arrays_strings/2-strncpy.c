#include "main.h"
#include <string.h>

/**
 * _strncpy - function to copy bytes of
 * a string into another
 * @dest: destination string
 * @src: source string
 * @n: bytes of src to copy
 *
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
