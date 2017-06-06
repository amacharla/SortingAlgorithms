#include <stdio.h>
/**
  *main - print out the program name
  *@argc: argument count
  *@argv: unused attribute
  *Return: 0 success
  */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d", argc - 1);
	putchar(10);
	return (0);
}
