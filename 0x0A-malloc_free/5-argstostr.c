#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of my program
 * @ac: argument count
 * @av: argument array
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *b;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
		size++;
	}
	size++;

	b = malloc(size * sizeof(char));
	if (b == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			b[k] = av[i][j];
			k++;
		}
		b[k] = '\n';
		k++;
	}
	b[k] = '\0';

	return (b);

}
