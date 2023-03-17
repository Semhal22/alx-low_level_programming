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

	if (new_size > old_size)
	{
		reptr = malloc(new_size);
		free(ptr);
		return (reptr);
	}
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
	return (reptr);
}
