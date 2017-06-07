#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - initilizes and return pointer to a 2 dimensional array of
 * integers.
 * @width: pointers to hold pointer
 * @height: pointer being filled with 0
 * Return: Null if no memory is allocated or double pointer if space created
 * or null
 * height or width is negative or 0
 */
int **alloc_grid(int width, int height)
{	/*width = collumns | height = rows*/

	int **a; /*pointer to hold pointers*/
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*save pointer space * width amount of size*/
	a = malloc(width * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
/*fill each pointer space with space in form of 0 height amount of times*/
	for (i = 0; i < width; i++)
	{
		a[i] = malloc(height * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(a[j]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			a[i][j] = 0;
	}
	return (a);

}
