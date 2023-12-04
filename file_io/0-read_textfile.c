#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed;
 * 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;     /* File descriptor*/
	ssize_t read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	/*Open the file for reading*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/*Allocate memory for the buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/*Read from the file*/
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/*Write to the standard output*/
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/*Clean up and close the file*/
	free(buffer);
	close(fd);

	return (read_bytes);
}
