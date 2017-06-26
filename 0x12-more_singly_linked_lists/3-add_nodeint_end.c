#include "lists.h"
/**
  * add_nodeint_end - adds new node at the end of a listint_t list
  * @head: pointer to a pointer head to manipulate and make new the last node
  * @n: data for the new node
  * Return: address of new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}

	return (new);
}
