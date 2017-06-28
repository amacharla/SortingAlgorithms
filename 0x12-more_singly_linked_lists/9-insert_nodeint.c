#include "lists.h"
/**
 * new_node - create a new node and save value n in data spot
 * @n: value being saved in new->data
 * Return: pointer to new node
 */
listint_t *new_node(int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	return (new);
}
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to pointer of original head
 * @idx: is the index of the list where the new node should be added
 * @n: value thats being added to the new->data.
 * Return: pointer to new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	char trigger;/*ony used if index is 0*/
	listint_t *new, *nextptr, *headptr = *head;

	if (idx > 0)
		idx -= 1;/*to get the previous node when running loop*/
	else
		trigger = 1;/*to help set respective pointer when index is 0*/

	for (i = 0; i < idx && headptr; i++)
		headptr = headptr->next;

	new = new_node(n);/*create new node with data*/

	if (new == NULL || headptr == NULL)
		return (NULL);

	/*save next node ptr or NULL if last*/
	nextptr = headptr->next ? headptr->next : NULL;
	if (trigger == 1) /*if index is 0*/
	{
		*head = new;/*become first node*/
		new->next = headptr;/*becomes what used to be the first node*/
	}
	else /*if index is not 0*/
	{
		headptr->next = new;/*make prev node .next to point to new node*/
		new->next = nextptr;/*have new node point to saved next node*/
	}

	return (new);
}
