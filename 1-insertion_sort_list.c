#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using INSERTION SORT
 * @list: double pointer to doubly linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listinit_t *past_node, *node_swap, *past_node, *current_node = *list;

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
					break;
				}
			}
			if (past_node == NULL) /* if being swapped with head */
				insert_head(list, node_swap);
		}
		if (current->n < current->next->n) /* increment to next node */
			current = current->next;
	}
}
