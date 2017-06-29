#include "lists.h"
/**
  * print_listint_safe - prints all the elements of listint_t list
  * @head: header pointing to the first node
  * Return: numbers of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *storage, *current = head;
	size_t count;

	if (head == NULL)
		return (98);

	for (count = 0; current != storage; count++)
	{
		printf("[%p] %d\n", (void *) &current, current->n);
		storage = current;
		current = current->next;
	}
	return (count);
}
