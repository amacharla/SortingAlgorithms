#include <stdlib.h>
/**
 * array_range - allocates space for an array of int
 * @min: where int starts
 * @max: where int ends
 * Return: NULL if malloc fails or min> max else return allocated space for int
 */
int *array_range(int min, int max)
{
	int *array;
	int i, spots;

	if (min > max)
		return (NULL);
	/*2-5=3 | 3+1=4 | 4 spots for 2,3,4,5*/
	spots = max - min + 1;
	array = malloc(spots * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < spots; i++, min++)
		array[i] = min;

	return (array);
}
