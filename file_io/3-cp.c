#include "main.h"

#define BUF_SIZE 1024

/**
 * copy_file - Copy the content from source file to destination file.
 * @from_fd: File descriptor of the source file.
 * @to_fd: File descriptor of the destination file.
 * Return: 0 on success, exit codes on failure.
 */
int copy_file(int from_fd, int to_fd)
{
        char buffer[BUF_SIZE];
        ssize_t bytes_read, bytes_written;

        while ((bytes_read = read(from_fd, buffer, BUF_SIZE)) > 0)
        {
                bytes_written = write(to_fd, buffer, bytes_read);

                if (bytes_written == -1 || bytes_written != bytes_read)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to file\n");
                        close(from_fd);
                        close(to_fd);
                        exit(EXIT_FAILURE);
                }
        }

        if (bytes_read == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file\n");
                close(from_fd);
                close(to_fd);
                exit(EXIT_FAILURE);
        }

        return (0);
}


/**
 * main - Entry point of the program for copying file content.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of strings containing the arguments.
 * Return: 0 on success, exit codes on failure.
 */
int main(int argc, char *argv[])
{
        int from_fd, to_fd;

        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
                exit(EXIT_FAILURE);
        }

        if ((from_fd = open(argv[1], O_RDONLY)) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }

        if ((to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664)) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                close(from_fd);
                exit(EXIT_FAILURE);
        }

        if (copy_file(from_fd, to_fd) == -1)
        {
                close(from_fd);
                close(to_fd);
                exit(EXIT_FAILURE);
        }

        if (close(from_fd) == -1 || close(to_fd) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
                exit(EXIT_FAILURE);
        }

        return (0);
}
