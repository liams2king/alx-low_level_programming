#include "main.h"

/**
 * create_file - Create a file and write a string to it
 * @filename: Name of the file to create
 * @text_content: String to write to the file
 *
 * Return: On success, returns 1. On failure, returns -1.
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
