#include "hash_tables.h"
/**
 * key_index - Generates the index of a key
 * @key: The key
 * @size: Size of the array
 *
 * Return: Index at which key/value is stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t index;

	if (key != NULL && size > 0)
		index = hash_djb2(key) % size;
	else
		index = (unsigned long int) -1;
	return (index);
}
