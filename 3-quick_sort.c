#include "sort.h"

void quick_sort(int *array, size_t size)
{
	unsigned int i, j;
	int pivot, left, right, sorted = 1;

	if (size <= 1 || array == NULL)
		return;
	while (1)
	{ /* Sorted Check */
		for (i = 0; i < size - 1; i++)
		{	/* if unsorted */
			if (array[i] > array[i + 1])
			{
				sorted = 0;
				break;
			}
		}

		if (sorted) /* quit loop if sorted */
			break;

		/* set pivot and right marker */
		pivot = array[size - 1]; /* always last element */
		right = array[size - 2]; /* second to last element */

		for (i = 0; i < size; i++) /* left marker compare with pivot */
		{
			left = array[i];
			if (left >= pivot || left == right)
				break;
		} /* increment left marker --> */

		for (j = size - 2; j > 0 && i != j; j--) /* right marker compare with pivot */
		{
			right = array[j];
			if (right < pivot)
				break;
		} /* decrement right marker <-- */

		if (i == j) /* left marker == right marker */
		{ /* swap marker with pivot */
			array[i] = pivot;
			array[size - 1] = left;
		}
		else /* swap left and right marker */
		{
			array[i] = right;
			array[j] = left;
		}

		print_array(array, size);

	} /* go through array again */
}
