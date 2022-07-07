#include "main.h"

/**
 * int _islower - checks if a character is lowercase
 * @c: ASCII value of character 
 *
 * Return: 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
