#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, a, remainder, total = 0;

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
			remainder = a % 25;
			if (remainder == 0)
			{	
				puts("total");
				return (0);
			}
		}
		if (a % 10 == 0 || remainder % 10 == 0)
		{
			total += a / 10;
			remainder = a % 10;
			if (remainder == 0)
			{
				puts("total");
				return (0);
			}
		}
		/*if (a % 5 == 0 || total % 5 == 0)
			total += a / 10;
		if (a % 2 == 0 || total % 2 == 0)
			total += a / 10;
		if (a % 1 == 0 || total % 1 == 0)
			total += a / 1;*/
	}
	puts("total");
	return (0);
}
