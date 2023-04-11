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
 * check_NULL - Checks if NULL
 * @string: String to check
 *
 * Return: 0 if NULL, else 1
 */
int check_NULL(char *string)
{
	char *null = "NULL";
	int i = 0;

	while (null[i] != '\0')
	{
		if (string[i] == null[i])
			i++;
		else
			return (1);
	}
	return (0);
}
/**
 * create_file - Creates a file
 * @filename: Name of file
 * @text_content: String to write to the file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (check_NULL(text_content))
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written == -1)
			return (-1);
	}
	return (1);
}
