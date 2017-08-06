#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;

	if (h == NULL)
		return (NULL);
	for (i = 0; i < idx && (*h)->next; i++)
		*h = (*h)->next;
	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = *h->prev;
	i == idx ? new->next = *h : new->next = NULL;
	return (new);
}
