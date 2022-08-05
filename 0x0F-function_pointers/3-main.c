#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (*(argv[2]) == '%' || *(argv[2]) == '/')
	{
		if (*(argv[3]) == '0')
		{
			printf("Error\n");
			exit(100);
		}
	}
	result = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
