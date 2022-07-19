#include "main.h"
#include <string.h>

/**
 * memset - function to copy n first bytes of memory pointed to with b
 * @s: memory address pointed to
 * @b: char to copy
 * @n: bytes to copy
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
