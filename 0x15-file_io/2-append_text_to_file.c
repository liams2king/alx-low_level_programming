#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file to append to.
 * @text_content: The text to append.
 *
 * Return: On success, 1. On failure, -1.
 *
 * Description: This function appends text to the end of a file. If the file
 * does not exist, it will be created. If filename is NULL, or if the user
 * lacks write permissions for the file, the function will fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
