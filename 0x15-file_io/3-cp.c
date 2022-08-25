#include "main.h"

#define BUFF_SIZE 1024
#define ARG_WARN "Usage: cp file_from file_to"
#define SOURCE_WARN "Error: Can't read from file"
#define DEST_WARN "Error: Can't write to"

/**
 * print_error - prints error message
 * @message: error message to print
 * @file: file causing error
 * @code: exit status
 */
void print_error(char *message, char *file, int code)
{
	if (!file)
		dprintf(STDERR_FILENO, "%s\n", message);
	else
		dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(code);
}
/**
 * _close - close a file descriptor
 * @fd: file descriptor
 */
void _close(int fd)
{
	int f_d;

	f_d = close(fd);
	if (f_d == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - function that takes file arguments and copies content
 * from one file to another
 * @ac: number of arguments
 * @av: array containing arguments
 *
 * Return: 0
 */
int main(int ac, char *av[])
{
	int df, dt, bytes_r, bytes_w;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[BUFF_SIZE];

	if (ac != 3)
		print_error(ARG_WARN, NULL, 97);
	df = open(av[1], O_RDONLY);
	if (df == -1)
		print_error(SOURCE_WARN, av[1], 98);
	dt = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (dt == -1)
		print_error(DEST_WARN, av[2], 99);
	bytes_r = read(df, &buffer, BUFF_SIZE);
	while (bytes_r != 0)
	{
		if (bytes_r == -1)
			print_error(SOURCE_WARN, av[1], 98);
		bytes_w = write(dt, &buffer, bytes_r);
		if (bytes_w == -1)
			print_error(DEST_WARN, av[2], 99);
		bytes_r = read(df, &buffer, BUFF_SIZE);
	}
	_close(df);
	_close(dt);
	return (0);
}
