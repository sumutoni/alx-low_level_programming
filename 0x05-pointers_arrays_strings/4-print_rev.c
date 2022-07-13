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
	char str[];

	for (i = 0, j = strlen(s); i < strlen(s), 
			j > 0; i++, j--)
	{
		str[i] = s[j];
	}
	puts(str);
}
