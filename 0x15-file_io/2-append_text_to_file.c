#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of file to append text to
 * @text_content: text to append
 *
 * Return: 1 for success, -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, bytes, size = 0;

	if (!filename)
		return (-1);
	file_d = open(filename, O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[size])
		size++;
	bytes = write(file_d, text_content, size);
	if (bytes != size)
		return (-1);
	close(file_d);
	return (1);
}
