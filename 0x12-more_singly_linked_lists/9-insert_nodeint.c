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
	listint_t *new, *nextptr, *headptr = *head;

	/*using 1 so i can get the node before the index*/
	for (i = 1; i < idx && headptr; i++)
		headptr = headptr->next;

	new = new_node(n);/*create new node with data*/

	if (new == NULL || headptr == NULL)
		return (NULL);
	nextptr = headptr->next;/*save next node ptr*/
	headptr->next = new;/*make prev node .next to point to new node*/
	new->next = nextptr;/*have new node point to saved next node*/

	return (new);
}
