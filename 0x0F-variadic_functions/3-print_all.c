#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_char - prints characters
  * @seperator:, " "
  * @list: va list
  * Return: 0 success
  */
int print_char(char *seperator, va_list list)
{
	printf("%s%c", seperator, va_arg(list, int));
	return (0);
}
/**
  * print_int - prints ints
  * @seperator: ," "
  * @list: va list
  * Return: 0 success
  */
int print_int(char *seperator, va_list list)
{
	printf("%s%i", seperator, va_arg(list, int));
	return (0);
}
/**
  * print_float - prints float
  * @seperator: ," "
  * @list: va list
  * Return: 0 success
  */
int print_float(char *seperator, va_list list)
{
	printf("%s%f", seperator, va_arg(list, double));
	return (0);
}
/**
  * print_string - prints string
  * @seperator: ," "
  * @list: va list
  * Return: 0 success
  */
int print_string(char *seperator, va_list list)
{
	char *nullcheck = va_arg(list, char*);

	if (nullcheck)
	{	printf("%s%s", seperator, nullcheck);
		return (0);
	}
	printf("(nil)");
	return (1);
}
/**
 * print_all - prints all
 * @format: output modifiers
 */
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
	char *seperator = "";
	va_list list;

	va_start(list, format);

	while (format && format[i])
	{
		while (function[j].type)
		{
			if (function[j].type == format[i])
			{
				function[j].printer(seperator, list);
				seperator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
