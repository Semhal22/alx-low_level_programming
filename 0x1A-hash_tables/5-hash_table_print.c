#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	size_t i, j = 0, count = 0;

	if (ht != NULL || ht->size > 0)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				count++;
				temp = temp->next;
			}
		}
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				j++;
				printf("'%s': '%s'", temp->key, temp->value);
				if (j != count)
					printf(", ");
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
