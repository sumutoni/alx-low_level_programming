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
	int len;

	if (s1 == NULL || s2== NULL)
	{
		if (s1 == NULL)
			strcpy(s1, "");
		if (s2 == NULL)
			strcpy(s2, "");
	}
	len = strlen(s1) + strlen(s2);
	cpy = malloc(len + 1);
	strcat(s1, s2);
	strcpy(cpy, s1);
	return (cpy);
}
