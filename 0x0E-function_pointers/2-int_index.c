/**
 * int_index - searches for integer
 * @array: array thats being searched
 * @size: size of array
 * @cmp: pointer to a function(s) that checks for int with its own cretria
 * Return: index of mached integer or -1 if not matched or size is <0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
