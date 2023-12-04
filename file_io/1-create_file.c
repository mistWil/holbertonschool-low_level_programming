#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Creates a file with the specified content.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_status;
	size_t text_size = 0;

	if (filename == NULL)
		return (-1);

	/*O_CREAT : create the file if it doesn't exist*/
	/*O_WRONLY : write-only access*/
	/*O_TRUNC : truncate the file if it already exists*/
	/*O_APPEND : append mode*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/*If text_content is not NULL, calculate its size*/
	if (text_content != NULL)
	{
		while (text_content[text_size] != '\0')
			text_size++;
	}

	/*If text_content is not NULL, write it to the file*/
	if (text_size > 0)
	{
		write_status = write(fd, text_content, text_size);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
