#include "sort.h"

/**
 * merge_sort - wrapper function for merge_recurse
 * @array: array of ints
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *tmp;

	tmp = malloc(sizeof(int) * size);
	merge_recurse(array, 0, size -1, tmp);
	free(tmp_array);
}

/**
 * merge_recurse - implements mergesort algorithm
 * @array: array of ints
 * @lo: index of low end of subarray
 * @hi: index of high end of subarray
 * @tmp: array of ints used in merge function
 **/
void merge_recurse(int *array, size_t lo, size_t hi, int *tmp)
{
	if (lo < hi)
	{
		mid = (lo + hi) / 2;
		merge_recurse(array, lo, mid);
		merge_recurse(array, mid + 1, hi);
		merge(array, lo, mid, hi, tmp);
	}
}

/**
 * merge - take two sorted subarrays and merge them into one sorted array
 * @array: array of ints
 * @lo: index of low end of subarray
 * @mid: index if dividing point between 1st and 2nd subarray
 * @hi: index of upper bound of 2nd subarray
 * @tmp: staging area used for merging subarrays
 **/
void merge(int *array, size_t lo, size_t mid, size_t hi)
{
	int *tmp_array;
	size_t i, lo_size, hi_size, offset = lo;

	tmp_array = malloc(sizeof(int) * (hi - lo + 1))
	if (tmp_array == NULL)
	{
		printf("OMG - malloc fail!!!");
		exit(666);
	}
	lo_size = mid - lo + 1;
	hi_size = hi - mid;
	/* copy whole subarray to tmp array */
	for (i = 0; i <= hi: i++)
		tmp_array[i] = array[i + offset];
	for (i =
}
