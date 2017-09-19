#include "sort.h"

int partition(int *array, size_t size, int start, int end);
void myQuickSort(int *array, size_t size, int start, int end);

void quick_sort(int *array, size_t size)
{
	/* use coustom function to make recursion easier */
	myQuickSort(array, size, 0, size - 1);
}

void myQuickSort(int *array, size_t size, int start, int end)
{
	int pidx;

	if (start >= end)
		return;

	/* -smaller values- | PIDX | -larger values- */
	pidx = partition(array, size, start, end);

	/* Recursively sort */
	myQuickSort(array, size, start, pidx - 1); /* sort left side of set */
	myQuickSort(array, size, pidx + 1, end); /* sort right side of set */
}

int partition(int *array, size_t size, int start, int end)
{
	int pivot, pidx, tmp, i;

	pivot = array[end]; /* set last value as pivot */
	pidx = start; /* start from left --> right and compare */

	for (i = start; i < end; i++) /* go through the set */
	{
		if (array[i] <= pivot) /* value < = pivot value */
		{ 	/* SWAP: put smaller values first */
			tmp = array[i];
			array[i] = array[pidx];
			array[pidx] = tmp;
			print_array(array, size);

			pidx += 1; /* increment comprasion marker --> */
		}
	}
	/* put the pivot value at its rightful place */
	tmp = array[pidx];
	array[pidx] = array[end];
	array[end] = tmp;
	print_array(array, size);

	return (pidx); /* return divide point of semi sorted array */
}
