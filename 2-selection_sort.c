#include "sort.h"

/**
 * selection_sort - sort array using selection sort algorithm
 * @array: pointer to array of ints
 * @size: size of array
 **/

void selection_sort(int *array, size_t size)
{
	size_t j, idx, min_idx = 0;
	int tmp;

	for (j = 0; j < size; j++)
	{
		for (idx = j; idx < size; idx++)
			if (array[idx] < array[min_idx])
				min_idx = idx;
		tmp = array[j];
		array[j] = array[min_idx];
		array[min_idx] = tmp;
		print_array(array, size);
	}
}
