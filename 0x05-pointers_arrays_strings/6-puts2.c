#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of string
 * @s: string
 */
void puts2(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", s[i]);
		}
		else
		{
			continue;
		}
	}
	printf("\n");
}
