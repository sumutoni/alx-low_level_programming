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
		if (isupper(s[i]) == 0)
		{
			toupper(s[i]);
		}
	}
	return (s);
}
