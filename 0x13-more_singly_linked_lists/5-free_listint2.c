#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: double pointer to the first element of list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}
