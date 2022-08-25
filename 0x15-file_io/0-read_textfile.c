#include "main.h"

/**
 * read_textfile - reads a text file and prints to the POSIX stdout
 * @filename: file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	size_t bytes_r, bytes_w;
	char *file;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	bytes_r = read(file_d, file, letters);
	if (bytes_r == -1)
		return (0);
	bytes_w = write(STDOUT_FILENO, file, bytes_r);
	return (bytes_w);
}
