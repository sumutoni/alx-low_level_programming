#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	i = len - 1;
	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
	printf("\n");
}
