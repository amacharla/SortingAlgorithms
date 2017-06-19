#include "variadic_functions.h"
/**
  * sum_them_all - retuns the sum of all its parameters
  * @n : number of arguments taking in
  * Return: sum of all arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(list, int);

	va_end(list);
	return (sum);
}
