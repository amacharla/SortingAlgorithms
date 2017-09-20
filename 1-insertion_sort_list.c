#include "sort.h"

/**
 * extract_node - pull node out of doubly-linked list, stitch together previous
 *                and next nodes.
 * @node: pointer to a node in a double linked list
 **/
void extract_node(listint_t **node)
{
	if ((*node)->next != NULL)
		(*node)->next->prev = (*node)->prev;
	if ((*node)->prev != NULL)
		(*node)->prev->next = (*node)->next;
	(*node)->next = NULL;
	(*node)->prev = NULL;
}

/**
 * insert_head - inserts new head at head of list ALSO, extract new_head from
 *				 previous location
 * @list: double pointer to head of doubly-linked list
 * @new_head: pointer to node that needs to be relocated to head of list
 * TODO: consider joining what was left behind in new_head's old location
 **/
void insert_head(listint_t **list, listint_t *new_head)
{
	extract_node(&new_head);

	if (*list == NULL)
	{
		*list = new_head;
		new_head->prev = new_head->next = NULL;
		return;
	}
	/* non-edge case */
	(*list)->prev = new_head;
	new_head->next = *list;
	new_head->prev = NULL;
	*list = new_head;
}

/**
 * insert_node - Insert swap_node after targer_node
 * @target_node: pointer to target node in doubly linked list
 * @swap_node: pointer to node to be moved before the current node
 **/
void insert_node(listint_t *target_node, listint_t *swap_node)
{

	extract_node(&swap_node);

	swap_node->next = target_node->next;
	swap_node->prev = target_node;
	target_node->next = swap_node;

	if (swap_node->next)
		swap_node->next->prev = swap_node;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using INSERTION SORT
 * @list: double pointer to doubly linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *past_node, *node_swap, *current = *list;

	if (list == NULL || *list == NULL)
		exit (EXIT_FAILURE);

	while (current->next)
	{
		/* validate order */
		if (current->n > current->next->n)
		{
			node_swap = current->next; /*node being swapped*/
			past_node = current->prev; /*prev node to be compared*/
			for (; past_node; past_node = past_node->prev)
			{ /*check all prevs nodes number */
				if (past_node->n < node_swap->n)
				{ /* insert at node at sorted location */
					insert_node(past_node, node_swap);
					print_list(*list);
					break;
				}
			}
			if (past_node == NULL) /* if being swapped with head */
				insert_head(list, node_swap);

			print_list(*list);
		}
		if (current->next && current->n < current->next->n) /* increment to next node */
			current = current->next;
	}
}
