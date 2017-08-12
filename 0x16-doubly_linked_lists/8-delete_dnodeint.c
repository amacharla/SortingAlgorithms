#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next, *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		if (next != NULL)
		{
			next->prev = NULL;
			return (1);
		}
	}
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	current->prev->next = current->next;
	if (current->next)
	{
		current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (1);
}
