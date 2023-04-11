#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: a pointer to the name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: 0 if failed else the actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *buffer;
	ssize_t bytesRead, bytesWrote;

	if (filename == NULL)
		return (0);

	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(fptr);
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, fptr); /* read from file */
	buffer[bytesRead] = '\0'; /* Null terminate the buffer */

	bytesWrote = fwrite(buffer, sizeof(char), bytesRead, stdout);
	if (bytesWrote != bytesRead)
	{
		fclose(fptr);
		free(buffer);
		return (0);
	}
	fclose(fptr);
	free(buffer);

	return (bytesRead);
}
