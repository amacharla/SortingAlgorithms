#include "lists.h"
/**
 * list_len - returns the number of elements in the linked list_t list.
 * @h: points to the head
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	/* goes through the list untill node h points to null*/
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
