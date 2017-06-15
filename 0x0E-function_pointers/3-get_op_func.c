#include "3-calc.h"
/**
 * get_op_func - fetches the proper function
 * @s: determins appropate function based on symbol
 * Return: pointer to the proper function
 */
int (*get_op_func(char *s))(int num1, int num2)
{
	/*array of structures of struct op*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};	/*op , function address that takes in (int, int) returns int*/
	int i = 0;

	/*while the elements of the op isnt null*/
	while (ops[i].op)
	{	/*operator = sign and sign is the only character*/
		if (ops[i].op[0] == *s && s[1] == '\0')
			return (ops[i].f); /*return pointer to function to respective operator*/
		i++; /*looks through all the operators in array ops.op*/
	}
	return (NULL);
}
