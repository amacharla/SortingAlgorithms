#include "lists.h"
/**
  * add_nodeint - adds new node at the beginning of a listint_t list
  * @head: pointer to a pointer head to manipulate and make new the first node
  * @n: data for the new node
  * Return: address of new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;/*make new.next same as first node*/
	*head = new;/*make new the first node*/

	return (new);
}
