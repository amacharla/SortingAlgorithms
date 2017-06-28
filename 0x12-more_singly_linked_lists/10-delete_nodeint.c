#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list.
 * @head: pointer to a pointer of original head
 * @index: target node to delete
 * Return: 1 for succuss and -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *nextptr, *prevptr = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next ? (*head)->next : NULL;
		free(prevptr);
		return (1);
	}
	/*access prev node before target node*/
	for (i = 1; i < index && prevptr; i++)
		prevptr = prevptr->next;

	if (prevptr == NULL)
		return (-1);
	current = prevptr->next;/*go to target node*/
	nextptr = current->next ? current->next : NULL;/*save target nodes .next ptr*/
	free(current);/*free target node*/
	prevptr->next = nextptr;/*set prev node to node after target ptr*/
	return (1);


}
