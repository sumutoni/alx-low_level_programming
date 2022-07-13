#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap ints using pointers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	 int temp;

	 temp = *a;
	 *a = *b;
	 *b = temp;
}
