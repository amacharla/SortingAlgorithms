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
	new->next = NULL;/*make new node tail*/
	if (current == NULL)/*if this is the first node on the list*/
	{
		*head = new;/*USE THIS INSTEAD OF CURRENT = new*/
		new->prev = NULL;/*because its first node*/
		return (new);
	}
	/* if not first node then Get to tail node */
	for (; current->next != NULL; current = current->next)
		;
	new->prev = current;/*set the @prev of tail node*/
	current->next = new;/*have old last node's @next point to tail*/
	return (new);
}
