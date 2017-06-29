#include "lists.h"
/**
 * new_storage - adds address listint_t nodes
 * @head: pointer of a pointer shead
 * @address: address of node to be stored and compared to
 */
void *new_storage(storage **head, listint_t *address)
{
	storage *new = malloc(sizeof(storage));

	if (new == NULL)
		return (NULL);
	new->address = address;
	new->next = *head;
	*head = new;
}
/**
  * print_listint_safe - prints all the elements of listint_t list
  * @head: header pointing to the first node
  * Return: numbers of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *current = head;
	storage *shead = NULL;
	size_t count;

	if (current == NULL)
		return (98);

	for (count = 0; current; count++)
	{
		while (shead)
		{
			if (shead != (storage *) current)
				printf("[%p] %d\n", (void *) &current, current->n);
			else
				new_storage(&shead, current);
			shead = shead->next;
		}
		current = current->next;
	}
	return (count);
}
