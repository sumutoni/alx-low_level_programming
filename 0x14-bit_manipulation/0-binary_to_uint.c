#include "main.h"

/**
 * binary_to_uint - converts binary string to unsigned int
 * @b: pointer to binary string
 *
 * Return: converted int or 0 in other cases
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int idx;

	num = 0;
	if (b == NULL)
		return (0);
	for (idx = 0; idx < strlen(b); idx++)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
		num <<= 1;
		num += b[idx] - '0';
	}
	return (num);
}
