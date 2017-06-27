#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer of original head
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *nextptr = *head;/*save the headnode*/
	int n;

	if (nextptr == NULL)/*if list is empty*/
		return (0);

	n = nextptr->n;/*save data of head node*/
	*head = (*head)->next;/*make head point to second node*/
	free(nextptr);/*free head node*/

	return (n);

}
