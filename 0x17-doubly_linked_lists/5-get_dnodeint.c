#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the nth node of a list
 * @head: Pointer to the list
 * @index: Index of node to be retrieved
 *
 * Return: Node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t count = 0;

	while (temp != NULL)
	{
		if (index == count)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
