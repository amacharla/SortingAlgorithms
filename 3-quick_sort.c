#include "sort.h"

/**
 * quick_sort - helper function for recursive implementation of QuickSort using
 *              Lomuto partition scheme
 * @array: array of integers
 * @size: size of array
 **/
void quick_sort(int *array, size_t size)
{
	size_t hi = size - 1;

	printf("helper-QS: hi: %lu\n", hi);
	qs_recurse(array, 0, hi, size, "BEGIN");
}

/**
 * qs_recurse - recursive implementation of QuickSort algo using Lomuto
 *              partition scheme
 *
 *
 **/
void qs_recurse(int *array, int lo, int hi, size_t size, char *indi)
{
	size_t p;

	if (lo < hi)
		p = partition(array, lo, hi, size, "L");
		if (!(p < 0 && lo == 0 && hi == (size - 1)))
			qs_recurse(array, lo, p - 1, size, "--------");
		else
			exit;
		// qs_recurse(array, p + 1, hi, size);
		// print_array(array, size);
}
/**
 * partition - using value of pivot, divide array into values less than pivot
 *             and values greater than pivot
 * @lo: index to low end of the partition to be sorted into two groups
 * @hi: index of high end of partition to be sorted into two groups
 * Return: index of the divider between values less than and greater than the
 *         value of the pivot
 **/
size_t partition(int *array, int lo, int hi, size_t size, char *indi)
{
	int pivot = array[hi];
	int i = lo - 1;
	int j;

	pivot = pivot; /* to avoid unused var warning ... */
	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, i, j);
		}
	}
	if (array[hi] < array[i + 1])
		swap(array, i + 1, hi);
	print_array(array, size);
	/* printf("lo:%d, hi:%d\n", lo, hi); */
	printf("%spivot:%d lo:%d hi:%d\n\n",indi, i+1, lo, hi);
	if (i > 0 && lo == 0 && hi == (int)size -1 )
		exit(666);
    return (i + 1);
}

/**
 * swap - swaps to elements of an array of ints
 * @array: array of ints
 * @x: index of one element to be swapped
 * @y: index of the other element to be swapped
 **/
void swap(int *array, size_t x, size_t y)
{
	int tmp;

	tmp = array[x];
	array[x] = array[y];
	array[y] = tmp;
}
