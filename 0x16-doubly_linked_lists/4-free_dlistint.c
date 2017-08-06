#include "lists.h"
/**
 * free_dlistint - free entire list
 * @head: pointer to first node
 * Note I am using the next node to clear the past node
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)/*stop at tail*/
	{
		head->n = 0;/*optional to clear data*/
		head = head->next;/*go to next node*/
		free(head->prev);/*clear previous node*/
	}
	free(head);/*clear the pointer itself*/
}
