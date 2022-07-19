#include "main.h"
#include <string.h>

/**
 * _strchr - returns first occurence of a character in a string
 * @s: string to search in
 * @c: character to find
 *
 * Return: pointer to the first occurence of character
 */
char *_strchr(char *s, char c)
{
	int i, len;
	char *ptr;

	ptr = strchr(s, c);
	return (ptr);
}
