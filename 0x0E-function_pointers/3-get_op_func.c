#include "3-calc.h"
/**
 * get_op_func - fetches the proper function
 * @s: determins appropate function based on symbol
 * Return: pointer to the proper function
 */
int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (ops[i].op[0] == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
