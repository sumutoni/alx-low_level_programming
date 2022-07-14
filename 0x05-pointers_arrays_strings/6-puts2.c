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

	i = 0;
	len = strlen(s);
	while (i < len)
	{
		if (i % 2 == 0)
		{
			putchar(s[i]);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
}
