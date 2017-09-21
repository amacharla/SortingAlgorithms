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
	free(tmp);
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
	size_t mid;

	if (lo < hi)
	{
		mid = (lo + hi) / 2;
		merge_recurse(array, lo, mid, tmp);
		merge_recurse(array, mid + 1, hi, tmp);
		merge(array, lo, mid, hi, tmp);
	}
}

/**
 * pre_print - print state of both subarrays before merge
 * @lo: index of start of low subarray
 * @mid: index of end of low subarray
 * @hi: index of upper bound of upper subarray
 **/
void pre_print(int *array, size_t lo, size_t mid, size_t hi)
{
	size_t i;
	int comma = FALSE;

	printf("Merging...\n");
	printf("[left]");
	
	for (i = lo; i <= mid; i++)
	{
		if (comma)
			putchar(',');
		comma = TRUE;
		printf(" %d", array[i]);
	}
	comma = FALSE;
	printf("\n[right]");
	for (i = mid + 1; i <= hi; i++)
	{
		if (comma)
			putchar(',');
		comma = TRUE;
		printf(" %d", array[i]);
	}
	putchar('\n');
}

/**
 * post_print - print state of array after merge
 * @lo: index of start of merged subarray
 * @hi: index of end of merged subarray
 **/
void post_print(int *array, size_t lo, size_t hi)
{
	size_t i;
	int comma = FALSE;

	printf("[Done]");
	for (i = lo; i <= hi; i++)
	{
		if (comma)
			putchar(',');
		comma = TRUE;
		printf(" %d", array[i]);
	}
	putchar('\n');
}
/**
 * merge - take two sorted subarrays and merge them into one sorted array
 * @array: array of ints
 * @lo: index of low end of subarray
 * @mid: index if dividing point between 1st and 2nd subarray
 * @hi: index of upper bound of 2nd subarray
 * @tmp: staging area used for merging subarrays
 **/
void merge(int *array, size_t lo, size_t mid, size_t hi, int *tmp)
{
	size_t i, lodex = lo, hidex = mid + 1;

	for (i = lo; i <= hi; i++) /* update subsection of tmp array */
		tmp[i] = array[i];
	
	pre_print(array, lo, mid, hi);
	for (i = lo; i <= hi; i++)
	{
		if (tmp[lodex] < tmp[hidex])
		{
			array[i] = tmp[lodex];
			lodex++;
		}
		else
		{
			array[i] = tmp[hidex];
			hidex++;
		}
	}
	post_print(array, lo, hi);
}
