#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: points to head.
 * Return: size of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
