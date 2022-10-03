#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if a character is an alphabet
 * @c: ASCII value of character
 *
 * Description: takes an int value and check if
 * the ascii value is an alphabet
 * Return: 1 if alphabet and 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
