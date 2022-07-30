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
	char **cpy;
	int len1, len2, total_len;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			strcpy(s1, "");
		if (s2 == NULL)
			strcpy(s2, "");
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;
	*cpy = (char *)malloc((total_len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	strcat(s1, s2);
	strcpy(*cpy, s1);
	return (*cpy);
}
