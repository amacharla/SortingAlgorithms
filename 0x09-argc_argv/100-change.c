#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, a, total = 0;

	if (argc <= 1)
	{
		puts("Error");
		return (1);
	}

	for (i = 1; i <= argc; i++)
	{
		a = atoi(argv[i]);
		if (a % 25 == 0)
		{	total += a / 25;
			a = a % 25;
		}
		if (a % 10 == 0)
		{
			total += a / 10;
			a = a % 10;
		}
		if (a % 5 == 0)
		{
			total += a / 5;
			a = a % 5;
		}
		if (a % 2 == 0)
		{
			total += a / 2;
			a = a % 2;
		}

	}
	total = total + a;
	printf("%d\n", total);
	return (0);
}
