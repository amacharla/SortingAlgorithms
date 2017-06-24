#include "lists.h"
/**
  * add_node_end - adds new node at the end of a list_t list
  * @head: pointer that points to pointer head.
  * @str: char pointer that becomes name in str
  * Return: new node created and becomes last node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)/*if strdup fails it returns null*/
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;
	new->len = i;

	if (*head == NULL)/*if head already points to last node*/
		*head = new;
	else
	{	/*address of head stored in tmp*/
		tmp = *head;
		while (tmp->next != NULL)/*while pointer to node.next not null*/
			tmp = tmp->next;/*make tmp = next node*/
		tmp->next = new;/*have last node.next point to new node*/
	}
	new->next = NULL;/*set new nodes.next = NULL*/

	return (new);
}
