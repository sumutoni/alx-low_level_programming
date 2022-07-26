#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: string array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char* argv[])
{
	if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", argc - 1);
	return (0);
}
