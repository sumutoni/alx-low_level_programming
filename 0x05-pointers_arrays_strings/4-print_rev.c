#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i, j;
	int len;

	len = strlen(s);
	char str[len];

	i = 0;
	j = len;
	while (i < len && j > 0)
	{
		str[i] = s[j];
		i++;
		j--;
	}
	puts(str);
}
