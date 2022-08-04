#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array
 * @array: array of elements
 * @size: size of array
 * @action: function to execute on elments of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, scopy;

	scopy = (int)size;
	for (i = 0; i < scopy; i++)
	{
		action(array[i]);
	}
}
