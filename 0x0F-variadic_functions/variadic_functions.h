#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdarg.h>
/**
  *struct get_function - to hold values to find the function based on type
  *@type:type to print
  *@printer: function pointer taking in any input and outs int
  */
typedef struct get_function
{
	char type;
	int (*printer)();
} get_func;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* _VARIADIC_FUNCTION_H */
