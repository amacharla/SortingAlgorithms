#include "variadic_functions.h"
#include <stdio.h>

void print_char ();
void print_int ();
void print_float ();
void print_string ();

void print_all(const char * const format, ...)
{
	get_func function[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int i = 0;
	int j = 0;
	va_list list;

	va_start(list, format);

	while (format && format[i])
	{
		while (function[j].type)
		{
			if (function[j].type == format[i])
				function[j].printer(list);
			j++;
				
		}
		j = 0;
		i++;
		if (format[i + 1] == '\0')
			break;
		printf(", ");
	}
	printf("\n");
	va_end(list);
}

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

void print_string(va_list list)
{
	printf("%s", va_arg(list, char *));
}
