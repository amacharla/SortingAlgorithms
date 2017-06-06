#include <stdio.h>
#include <stdlib.h>
/**
  *main - print out all the arguments it recieves
  *@argc: argument count
  *@argv: argument array type char
  *Return: 0 multiple or -1 if less than 2 arguments
  */
int main(int argc, char **argv)
{
	int i, multiple = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (-1);
	}

	for (i = 1; i < argc; i++)
	{
		multiple *= atoi(argv[i]);
	}
	printf("%d\n", multiple);
	return (0);
}
