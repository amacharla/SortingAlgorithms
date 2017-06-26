#include "lists.h"
/**
  * listint_len - returns the number of elements in a linked listint_t list
  * @h: pointer to head, the begenning of the list
  * Return: number of elements in list.
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t count = 0;

	for (current = h; current != NULL; current = current->next)
		count++;
	return (count);
}
