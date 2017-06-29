#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer ot head
 * Return: where loop begins
 * function has not been tested
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare, *tmp = head;

	while (head || head->next)
	{
		printf("[%p] %d\n", (void *)&hare, hare->n);
		hare = head;
		tortoise = (head->next)->next;
		head = head->next;

		if (hare == tortoise)
		{
			while (1)
			{
				hare = head;
				tortoise = tmp;
				head = head->next;
				tmp = tmp->next;

				if (hare == tortoise)
				{
					printf("-> [%p] %d", (void *)&hare, hare->n);
					return (hare);
				}
			}
		}
	}
	return (NULL);
}
