#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "monty.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	stack_t *node = NULL;
	dlist_t *list;

	list = malloc(sizeof(dlist_t));

	dlist_int(list);
	dlist_ins_next(list, node, 0);
	dlist_ins_next(list, node, 1;
	dlist_ins_next(list, node, 2);
	dlist_ins_next(list, node, 3);
	print_dlistint(head);

	return (EXIT_SUCCESS);
}
