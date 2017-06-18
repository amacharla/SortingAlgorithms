#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_strings - print strings that are taken in as arguments
  * @separator: used to differentate one argument from the other
  * @n: number of arguments taking in that cant be changed
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		printf("%s", string ? string : "(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
