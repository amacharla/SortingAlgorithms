#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		free(head);
	else
	{
		tmp = head;
		while (tmp->next != NULL)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
		free(head);
	}
}
