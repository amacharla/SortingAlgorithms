#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to a pointer of original head.
 * Return: pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);/*no list exist*/

	while (*head)
	{
		next = (*head)->next;/*saves next node*/
		(*head)->next = prev;/*set current node next = prev node*/
		prev = *head;/*make current node prev node*/
		*head = next;/*change current node to be next node (ordered list)*/
	}
	*head = prev;/*make head point to prev node*/
	return (*head);
}
