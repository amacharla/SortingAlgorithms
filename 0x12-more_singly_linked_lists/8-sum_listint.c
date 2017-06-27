#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to head
 * Return: sum of all the data (n) in all nodes.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
