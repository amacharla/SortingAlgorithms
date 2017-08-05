#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: double pointer to head
 * @n: data
 * Return: pointer to new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;/*make current node last*/
	if (current == NULL)
	{
		*head = new;/*USE THIS INSTEAD OF CURRENT*/
		new->prev = NULL;
		return (new);
	}
	/* Get to the last node */
	for (; current->next != NULL; current = current->next)
		;
	new->prev = current;/*set last node to currents prev*/
	current->next = new;/*have old last node next point last node*/
	return (new);
}
