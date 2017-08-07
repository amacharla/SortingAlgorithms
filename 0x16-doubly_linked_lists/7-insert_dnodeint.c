#include "lists.h"

dlistint_t *new_node(int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	return (new);
}

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current = *h;

	if (h == NULL)
		return (NULL);

	for (; current->next != NULL; current = current->next)/*if in list*/
	{
		if (i == idx)
		{
			new = new_node(n);
			if (new == NULL)
				return (NULL);
			new->prev = current->prev;
			new->next = current;
			current->prev = new;
			return (new);
		}
		i++;
	}
	if (current->next == NULL && i == idx)/*IF tail*/
	{
		new = new_node(n);
		if (new == NULL)
			return (NULL);
		new->prev = current;
		new->next = NULL;
		current->next = new;
		return (new);
	}
	return (NULL);
}
