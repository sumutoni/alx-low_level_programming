#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * concat - concatenates strings based on number of
 * bytes of second string
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * @cpy: pointer to concatenated string
 * @len1: length of s1
 *
 * Return: pointer to concatenated string
 */
char *concat(char *s1, char *s2, char *cpy, unsigned int n, unsigned int len1)
{
	unsigned int i, j;

	j = 0;
	for (i = 0; i < len1; i++)
	{
		cpy[i] = s1[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		cpy[j] = s2[i];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
/**
 * string_nconcat - concatenates n bytes of second string to first string
 * @s1: first string
 * @s2: second string
 * @n: bytes to concatenate
 *
 * Return: pointer to new memory containing concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cpy;
	unsigned int len1, len2, total_len;

	len1 = 0;
	len2 = 0;
	total_len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n > len2)
		n = len2;
	total_len = len1 + n;
	cpy = (char *)malloc((total_len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	cpy = concat(s1, s2, cpy, n, len1);
	return (cpy);
}
