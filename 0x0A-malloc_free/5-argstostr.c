#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i, j;
	char **b;

	b = malloc(ac * sizeof(char));
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i]; a++)
			b[i] = malloc(
	}

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[j]; j++)
			b[j] = av[j];
		b[j] = '\n';
	}
	
	return (b);

}
