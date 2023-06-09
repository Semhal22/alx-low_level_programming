#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: Table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *current = NULL;
	size_t i;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				current = temp;
				temp = temp->next;
				free_node(current);
			}
		}
		free(ht->array);
		free(ht);
	}
}
