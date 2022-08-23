#include "main.h"

/**
 * get_endiannes - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int *end, n;

	n = 1;
	*end = &n;
	return (*end);
}
