#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	int result;

	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	result = atoi(av[1]) * atoi(av[2]);
	printf("%d\n", result);

	return (0);

}
