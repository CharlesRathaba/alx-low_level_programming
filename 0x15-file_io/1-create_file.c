#include "main.h"

/**
 * create_file - creates file
 * @filename: a pointer to the name of the file to create
 * @text_content: NULL terminated string to write in the file
 *
 * Return: 1 if it passes otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_descripter, bytes_written, text_len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	file_descripter = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_descripter, text_content, text_len);

	if (file_descripter == -1 || bytes_written == -1)
		return (-1);

	close(file_descripter);

	return (1);
}
