#include "lists.h"
/**
 * free_listint2 - function frees listint_t list and sets head to NULL
 * @head: pointer to a pointer head so can set original head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}
