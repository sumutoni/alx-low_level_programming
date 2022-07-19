#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - function to change characters from lowercase to uppercase
 * @s: string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
