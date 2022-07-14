#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - puts a string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = strlen(s);
	i = 1;
	j = len;
	if (len % 2 == 0)
	{
		while (i <= (len / 2) 
			&& j >= (len / 2) - 1)
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
		while (i < (len / 2) && 
			j > (len / 2))
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			j--;
			i++;
		}
	}
}
