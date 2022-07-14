#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - puts a string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	strrev(s);
	puts(s);
}
