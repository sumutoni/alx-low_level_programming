#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
