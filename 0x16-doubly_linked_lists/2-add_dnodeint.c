#include "lists.h"
/**
 * add_dnodeint - adds node to the begenning of the list
 * @head: double pointer to head
 * @n: data being added to the new node
 * Return: new node or NULL if malloc fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL)
		return (NULL);
/*Do i not need to link the *head-prev = new?*/
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}