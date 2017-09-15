#include "sort.h"

/**
 * insert_head - inserts new head at head of list ALSO, extract new_head from
 *				 previous location
 * @list: double pointer to head of doubly-linked list
 * @new_head: pointer to node that needs to be relocated to head of list
 * TODO: consider joining what was left behind in new_head's old location
 **/
void insert_head(listint_s **list, listint_s *new_head)
{
	if (list == NULL)
	{
		printf("ERROR - null list - insert_head\n");
		exit;
	}

	extract_node(&new_head);

	if (*list == NULL)
	{
		*list = new_head;
		new_head->prev = new_head->next = NULL;
		return;
	}
	/* non-edge case */
	*list->prev = new_head;
	new_head->next = *list;
	new_head->prev = NULL;
	*list = new_head;
}

/**
 * extract_node - pull node out of doubly-linked list, stitch together previous
 *                and next nodes.
 * @node: pointer to a node in a double linked list
 **/
void extract_node(listint_s **node)
{
	if (*node->next != NULL)
		(*node)->next->prev = (*node)->prev;
	if ((*node)->prev != NULL)
		(*node)->prev->next = (*node)->next;
	(*node)->next = NULL;
	(*node)->prev = NULL;
}
