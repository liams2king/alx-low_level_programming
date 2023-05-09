#include "main.h"

/**
 * create_file - Create a file and write a string to it
 * @filename: Name of the file to create
 * @text_content: String to write to the file
 *
 * Return: On success, returns 1. On failure, returns -1.
 */

int create_file(const char *file_name, char *text)
{
	int file_descriptor, bytes_written, len = 0;

	if (file_name == NULL)
		return (-1);

	if (text != NULL)
	{
		while (text[len] != '\0')
			len++;
	}

	file_descriptor = open(file_name, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_descriptor, text, len);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
