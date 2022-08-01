#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_nconcat - concatenates n bytes of second string to first string
 * @s1: first string
 * @s2: second string
 * @n: bytes to concatenate
 *
 * Return: pointer to new memory containing concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cpy;
	int len1, len2, total_len, i, j;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + (int)n;
	cpy = (char *)malloc((total_len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < len1; i++)
	{
		cpy[i] = s1[i];
		j++;
	}
	if ((int)n > len2)
	{
		for (i = 0; i < len2; i++)
		{
			cpy[j] = s2[i];
			j++;
		}
	}
	else
	{
		for (i = 0; i < (int)n; i++)
		{
			cpy[j] = s2[i];
			j++;
		}
	}
	cpy[++j] = '\0';
	/*strcpy(cpy, s1);*/
	return (cpy);
}
