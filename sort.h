#ifndef __sort_h_
#define __sort_h_

#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to prevous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* quick_sort.c functions */
void quick_sort(int *array, size_t size);
void qs_recurse(int *array, int lo, int hi, size_t size, char *indi);
size_t partition(int *array, int lo, int hi, size_t size, char *indi);
void swap(int *array, size_t x, size_t y);

#endif /*__sort_h_*/
