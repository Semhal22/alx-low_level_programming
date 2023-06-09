#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value asscoiated with a key
 * @ht: hash table
 * @key: key to look for
 *
 * Return: value or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head, *temp = NULL;
	size_t index, found = 0;

	if (ht == NULL || ht->size <= 0 || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	head = ht->array[index];
	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			found = 1;
			break;
		}
		temp = temp->next;
	}
	if (!found)
		return (NULL);
	return (temp->value);
}
