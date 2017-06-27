#include "lists.h"
/**
 * free_listint - function that frees listint_t list
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = head;
	while (tmp->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}

