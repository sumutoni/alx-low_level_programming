#include "search_algos.h"

/**
 * print_ar - print array currently being searched in
 * @array: array of elements
 * @findex: first index
 * @lindex: last index
 */
void print_ar(int *array, int findex, int lindex)
{
	int i;

	if (findex != 0)
	{
		printf("Searching in array: ");
		for (i = findex; i <= lindex; i++)
		{
			if (i != lindex)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
	}
	else
	{
		printf("Searching in array: ");
		for (i = findex; i < lindex; i++)
		{
			if (i == lindex - 1)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
	}
}
/**
 * divide_ar - divides array in 2 parts and search through a section
 * @array: array of elements
 * @findex: first index
 * @lindex: last index
 * @value: value to be searched
 *
 * Return: index of value
 */
int divide_ar(int *array, int findex, int lindex, int value)
{
	int mid_index;

	mid_index = findex + (lindex - findex) / 2;
	if (array[mid_index] == value)
	{
		print_ar(array, findex, lindex);
		return (mid_index);
	}
	if (array[mid_index] > value)
	{
		return (divide_ar(array, findex, mid_index - 1, value));
		print_ar(array, findex, mid_index - 1);
	}
	if (array[mid_index] < value)
	{
		return (divide_ar(array, mid_index + 1, lindex, value));
		print_ar(array, mid_index + 1, lindex);
	}
	else
		return (-1);
}
/**
 * binary_search - function that searches for a value in an array
 * of integers using the Binary search algorithm
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
	{
		return (-1);
	}
	print_ar(array, 0, (int)size);
	return (divide_ar(array, 0, (int)size - 1, value));
}
