#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * close_file - Closes a file and frees memory allocated
 * @buffer: Pointer to be deallocated
 * @fd: File descriptor
 *
 * Return: 0
 */
ssize_t close_file(char *buffer, int fd)
{
	free(buffer);
	close(fd);
	return (0);
}
/**
 * read_textfile - Reads and prints a text file
 * @filename: Name of file
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters read and printed
 * 0 if error(file can not be opened, filename is NULL or write fails)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buf;

	buf = malloc((letters + 1) * sizeof(char));
	if (buf == NULL || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (close_file(buf, fd));
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (close_file(buf, fd));
	buf[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (close_file(buf, fd));
	close(fd);
	free(buf);
	return (bytes_written);
}
