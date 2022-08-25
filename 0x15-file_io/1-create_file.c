#include "main.h"

/**
 * create_file - creates a file
 * @filename: name file to create
 * @text_content: null terminated string to write to file
 *
 * Return: 1 on success, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, s = 0;
	size_t bytes_r;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_d < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
	bytes = write(file_d, text_content, s);
	if (bytes != s)
		return (-1);
	}

	close(file_d);
	return (1);
}
