#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new memory containing concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *cpy;
	int len1, len2, total_len, i;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	char s1c[len1], s2c[len2];

	for (i = 0; i < len1; i++)
	{
		s1c[i] = *s1;
		s1++;
	}
	for (i = 0; i < len2; i++)
	{
		s2c[i] = *s2;
		s2++
	}
	total_len = len1 + len2;
	cpy = malloc((total_len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	strcat(s1c, s2c);
	strcpy(cpy, s1c);
	return (cpy);
}
