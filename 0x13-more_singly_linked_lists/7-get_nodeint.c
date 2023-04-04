#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Gets the nth node of listint_t
 * @head: Pointer to the list
 * @index: Index of node, starting from zero
 *
 * Return: nth node if it exists
 * Otherwise, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	size_t i;

	for (i = 0; i < index; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	return (temp);
}
