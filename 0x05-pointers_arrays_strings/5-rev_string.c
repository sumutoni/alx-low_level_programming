#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - puts a string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	int len, i, j, mid;
	char temp;

	temp = ' ';
	len = strlen(s);
	i = 0;
	j = len - 1;
	mid = len / 2;
	if (len % 2 == 0)
	{
		while (i <= mid - 1 && j >= mid)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			j--;
			i++;
		}
	}
	else
	{
		while (i < mid && j > mid)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			j--;
			i++;
		}
	}

}
