#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - print out all the arguments it recieves
  *@argc: argument count
  *@argv: argument array type char
  *Return: 0 multiple or -1 if less than 2 arguments
  */
int main(int argc, char **argv)
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
