#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"
/**
 * cp - Copies content of file to another
 * @file_from: File to copy from
 * @file_to: File to copy to
 *
 * Return: 0 if successful
 */
int cp(char *file_from, char *file_to)
{
	char buffer[1024];
	char *str;
	ssize_t bytes_read, bytes_written;
	int fd_from, fd_to, status_from, status_to;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
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
		str = "Error: Can't close fd ";
		dprintf(STDERR_FILENO, "%s%d\n", str, (status_from == -1) ? fd_from : fd_to);
		exit(100);
	}
	return (0);
}
/**
 * main - Calls function copy(cp)
 * @argc: Argument count
 * @argv: Pointer to arrays of arguments
 *
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "USAGE: cp file_from file_to\n");
		exit(97);
	}
	return (cp(argv[1], argv[2]));
}
