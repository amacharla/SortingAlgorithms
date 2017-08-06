#include "lists.h"
/**
 * sum_dlistint - gets sum of all n in linked list
 * @head: pointer to each node
 * Return: sum of all n or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
