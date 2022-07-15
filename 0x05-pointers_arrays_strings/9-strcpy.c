#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copy string into another
 * @dest: destination string
 * @src: source string
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
