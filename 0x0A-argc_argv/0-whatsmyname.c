#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program to print its name
 * @argc: number of arguments passed
 * @argv: array of strings to hold arguments passed
 *
 * Return: 0 for success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
