#include "lists.h"
/**
 * add_dnodeint - Adds a node at the beginning
 * @head: Double pointer to the head
 * @n: Data of new node
 *
 * Return: Address of the new element
 * or NULL if failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
