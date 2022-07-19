#include "main.h"
#include <string.h>

/**
 * _strprbk - function finds the first character in the 
 * string s1 that matches any character specified in s2
 * (It excludes terminating null-characters)
 * @s: string to scan
 * @accept: string with characters to match
 *
 * Return: a pointer to the character in s1 that 
 * matches one of the characters in s2, else returns NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);
	return (ptr);
}
