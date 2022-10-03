#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function to check for digit
 * @c: character
 *
 * Return: 0 if not digit, otherwise returns 1
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
