#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: the pointer to be reallocated
 * @old_size: previously allocated size
 * @new_size: size to be allocated
 *
 * Return: pointer to newly allocated size
 * NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *reptr;
	int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		reptr = malloc(new_size);
		free(ptr);
		return (reptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	reptr = malloc(new_size);
	for (i = 0; i < new_size; i++)
		if (i < old_size)
			reptr[i] = (char *)ptr[i];
	free(ptr);
	return (reptr);
}
