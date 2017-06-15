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
	int (*func)(int, int);

	if (argc < 4)
	{
		puts("Error argc");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		puts("Error denomator is 0");
		exit(99);
	}

	func = get_op_func(argv[2]);
	result = func(num1, num2);

	if (!(func))
	{
		puts("Error invald operator");
		exit(100);
	}

	printf("%d\n", result);
	return (0);
}
