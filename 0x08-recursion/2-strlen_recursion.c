#include "main.h"

/**
 * _strlen_recursion - print length of string recursively
 * @s: string to measure
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return len;
}
