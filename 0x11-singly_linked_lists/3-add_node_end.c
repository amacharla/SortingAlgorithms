#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdub(str);
	
	for (i = 0; str[i]; i++)
		;
	new-len = i;
	
	new-next = NULL;
	if (*head:
}
