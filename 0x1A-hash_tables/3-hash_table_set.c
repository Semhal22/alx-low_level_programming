#include "hash_tables.h"
/**
 * set_node - Initializes a node
 * @node: Pointer to the node
 * @key: key of the node
 * @value: value of the node
 *
 * Return: Pointer to the node
 */
hash_node_t *set_node(hash_node_t *node, const char *key, const char *value)
{
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}
/**
 * free_node - Frees a node
 * @node: Pointer to the node
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: They key
 * @value: Value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *head, *temp = NULL;
	size_t index, update = 0;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node = set_node(new_node, key, value);
	head = ht->array[index];
	if (head == NULL)
		head = new_node;
	else
	{
		temp = head;
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				update = 1;
				free_node(new_node);
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		if (!update)
		{
			new_node->next = head;
			head = new_node;
		}
	}
	ht->array[index] = head;
	return (1);
}
