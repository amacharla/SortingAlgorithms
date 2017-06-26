#include "lists.h"
/**
  * print_listint - prints all the elements of listint_t list
  * @h: header pointing to the first node
  * Return: numbers of nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		printf("%i\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
