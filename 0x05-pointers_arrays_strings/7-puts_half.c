#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints second half of string
 * @str: string
 */
void puts_half(char *str)
{
	int i, len, mid;

	len = strlen(str);
	mid = len / 2;
	if (len % 2 == 0)
	{
		for (i = mid; i < len; i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		for (i = mid + 1; i < len; i++)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
