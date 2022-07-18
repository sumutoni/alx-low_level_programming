#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i, mid, temp, j;

	mid = n / 2;
	j = n - 1;
	i = 0;
	if (n % 2 == 0)
	{
		while (i <= mid - 1 && j >= mid)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	else
	{
		while (i <= mid - 1 && j > mid)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
}
