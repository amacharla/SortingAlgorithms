#include "holberton.h"
/**
 * more_numbers - print numbers 0 - 14 x10
 */
void more_numbers(void)
{
	int a, num;

	for (a = 0; a <= 14; a++)
	{
		num = a % 10; /*takes only the ones place to avoid overflow*/

		if (a > 9)/* starts printing 1 after 9*/
			_putchar('1');

		_putchar(num + '0');
	}
	_putchar('\n');
}
