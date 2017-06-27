#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head.
 * @index: is the index of the node, starting at 0
 * Return: pointer to indexs node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;

	if (head == NULL)
		return (NULL);
	return (head);
}
