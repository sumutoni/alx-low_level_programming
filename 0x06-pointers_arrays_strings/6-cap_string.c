#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalize every word in a string
 * @s: string
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (isupper(s[i]) == 0)
	{
		toupper(s[i]);
	}
	for (i = 0; i < strlen(s); i++)
	{
		if ((s[i] == ',' || s[i] == ';' ||
			s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '"' || s[i] == '(' || s[i] == ')'
			|| s[i] == '{' || s[i] == '}') && s[i + 1] != '\0')
		{
			toupper(s[i + 1]);
		}
	}
	return (s);
}
