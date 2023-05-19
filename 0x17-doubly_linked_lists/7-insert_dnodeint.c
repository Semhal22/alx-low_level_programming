#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at given position
 * @h: Double pointer to the head of the list
 * @idx: Index of list where new node is added
 * @n: Data of new node
 *
 * Return: Address of new node or NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	size_t count = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL || idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current->next != NULL && count < idx - 1)
	{
		count++;
		current = current->next;
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
