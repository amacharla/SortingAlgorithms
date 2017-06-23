#include "lists.h"
#include "string.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to &head
 * @str: char pointer that holds string
 * Using function strdup to duplicate string
 * Return: address of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	*head = new;

	new->str = strdup(str); /*duplicating string*/
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	/*gets length of stirng*/
	for (i = 0; str[i]; i++)
		;
	new->len = i;

	return (new);
}
