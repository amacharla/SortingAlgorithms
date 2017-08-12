#include "lists.h"
/**
 * new_node - creates a new node and assigns value
 * @n: value being assigned to data
 * Return: pointer to new node
 */
dlistint_t *new_node(int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	return (new);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head
 * @idx: the index of the list where the new node should be added
 * @n: data for new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current = *h;

	if (h == NULL || (current == NULL && idx != 0))
		return (NULL);

	new = new_node(n);
	if (new == NULL)
		return (NULL);
	if (idx == 0)/*incerting in the begenning*/
	{
		new->prev = NULL;
		if (current == NULL) /*empty list*/
			current = new;
		else
			current->prev = new;
		new->next = current;
	}
	for (i = 0; i < idx - 1; i++)/*transvers and stop before idx*/
	{
		if (current->next == NULL)/*if idx > listsize return*/
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}
	new->prev = current;/*insert at idx*/
	new->next = current->next; /* current - new - Current->next */
	current->next = new;
	if (current->next != NULL)
		current->next->prev = new;
	return (new);
}
