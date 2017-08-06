#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to nodes to go through the linked list
 * @index: position to return the node
 * Return: NULL or node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
