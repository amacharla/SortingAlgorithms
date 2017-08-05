#include "lists.h"
/**
 * print_dlistint - prints data and returns size of list
 * @h: pointer to head
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
