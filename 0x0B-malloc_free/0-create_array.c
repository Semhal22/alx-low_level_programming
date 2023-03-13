#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: specific char to intialize the array
 *
 * Return: pointer to the array
 * NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	size_t i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
