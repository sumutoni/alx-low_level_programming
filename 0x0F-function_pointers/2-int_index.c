#include "function_pointers.h"

/**
 * int_index - function to execute function that searches for integer in array
 * @array: array of elements
 * @size: size of array
 * @cmp: function to perform comparison to find integer
 *
 * Return: index of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, status;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		status = cmp(array[i]);
		if (status == 1)
			return (i);
	}
	return (-1);
}
