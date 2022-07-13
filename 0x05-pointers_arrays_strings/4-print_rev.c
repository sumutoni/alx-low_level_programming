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
	char str[_strlen(s)];

	i = 0;
	j = strlen(s);
	while (i < strlen(s) || j > 0)
	{
		str[i] = s[j];
		i++;
		j--;
	}
	puts(str);
}
