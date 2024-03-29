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

	if (size <= 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	return (table);
}
