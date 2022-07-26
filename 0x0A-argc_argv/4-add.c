#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - adds 2 numbers
 * @argc: number of arguments
 * @argv: string array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, num;

	num = 0;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			num += atoi(argv[i]);
		}
		printf("%d\n", num);
	}
	if (argc == 1)
		printf("0");
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
