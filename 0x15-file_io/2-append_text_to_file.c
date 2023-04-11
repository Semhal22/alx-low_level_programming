#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * _strlen - Length of string
 * @str: Length
 *
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of file
 * @text_content: String to add to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	char bytes_written, len;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1 || bytes_written != len)
		return (-1);
	if (close(fd) == -1)
		return (-1);
	return (1);
}
