#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each
 * @nmemb: number of elements of array
 * @size: size of the elements
 *
 * Return: pointer to the allocated memory, each elt set to 0
 * NULL if fails or if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		array[0] = 0;
	return (array);
}
