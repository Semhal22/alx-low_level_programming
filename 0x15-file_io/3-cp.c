#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"
/**
 * main - Content of a file to another file
 * @argc: Argument count
 * @argv: Pointer to arrays of arguments
 *
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to;
	int fd_from, fd_to, status_from, status_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "USAGE: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((bytes_read = read(fd_from, &buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, &buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	status_from = close(fd_from);
	status_to = close(fd_to);
	if (status_from == -1 || status_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (status_from == -1) ? fd_from : fd_to);
		exit(100);
	}
	return (0);
}
