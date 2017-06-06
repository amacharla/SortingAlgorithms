#include <stdio.h>
/**
  *main - print out the program name
  *@argc: argument count
  *@argv: argument array type char
  *Return: 0 success
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	putchar(10);
	return (0);
}
