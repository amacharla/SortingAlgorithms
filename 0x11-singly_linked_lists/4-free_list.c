#include "lists.h"
/**
  *free_list - free list_t list
  *@head: pointer to first node
  */
void free_list(list_t *head)
{
	list_t *tmp;
	/*if head dosnt point to anything*/
	if (head == NULL)
		return;
	/*if the next node points to NULL--free node*/
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		return;
	}
	/*if tmp node (head) is not null*/
	while (head != NULL)
	{
		tmp = head->next;/*hold next nodes location*/
		free(head->str);
		free(head);/*free current node*/
		head = tmp;/*current = next node*/
	}
}
