#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 *
 * Return: Pointer to the newly created hash table or
 * NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	size_t i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * table->size);
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
