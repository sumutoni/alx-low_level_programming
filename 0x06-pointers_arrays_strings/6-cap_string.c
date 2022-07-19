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
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	for (i = 0; i < strlen(s); i++)
	{
		if (check_char(s[i]) && s[i + 1] != '\0')
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
}
int check_char(char s)
{
	if (s == ' ' || s == '.' || s == ',')
		return (1);
	if (s == ';' || s == '!' || s == '?')
		return (1);
	if (s == '"' || s == '{' || s == '}')
		return (1);
	if (s =='(' || s == ')' || s == '!')
		return (1);
	if (s == '\t')
		return (1)
	else
		return (0);
}
