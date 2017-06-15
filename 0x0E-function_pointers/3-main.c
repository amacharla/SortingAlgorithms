#include "3-calc.h"
/**
 * main - calculator
 * @argc: argument count
 * @argv: argument value
 * Return: 0 success and result of caculation
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*func)(int, int);/*hold pointer to function with 2 int args*/
	/*must have 3 arguments*/
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/*prevents undefined computation*/
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		puts("Error");
		exit(100);
	}
	/*sends symbol of operator > gets pointer to right function for computation*/
	func = get_op_func(argv[2]);
	/*if func returns null then symbol doesn match arithmetic operator*/
	if (func == NULL)
	{
		puts("Error");
		exit(99);
	}
	/*func replactes respectice calc based of symbol given to func from line 29*/
	result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
