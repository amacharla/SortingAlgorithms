#include "sort.h"

void quick_sort(int *array, size_t size)
{
	unsigned int i, j;
	int pivot, left, right;

	if (size <= 1 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
		if (array[i] > array[i + 1])
			break;
	if (i == size - 1)
		return;

	pivot = array[size - 1];
	right = array[size - 2];

	for (i = 0; i < size - 1; i++)
	{
		left = array[i];
		if (left >= pivot || left == right)
			break;
	}

	for (j = size - 2; j > 0; j--)
	{
		right = array[j];
		if (right < pivot || right == left)
			break;
	}

	if (i == j)
	{
		array[i] = pivot;
		array[size - 1] = left;
	}
	else
	{
		array[i] = right;
		array[j] = left;
	}

	print_array(array, size);

	quick_sort(array, size);
}
