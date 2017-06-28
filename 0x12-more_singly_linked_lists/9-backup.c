#include "lists.h"

listint_t *new_node(int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	return (new);
}

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, j;
	listint_t *new, *prevptr = *head, *nextptr = *head;


	for (i = 0; i < idx && nextptr; i++)
		nextptr = nextptr->next;
	for (j = 0; j < i - 1 && prevptr; j++)
		prevptr = prevptr->next;

	new = new_node(n);

	if (new == NULL || nextptr == NULL)
		return (NULL);

	prevptr->next = new;
	new->next = nextptr;

	return (new);
}
