#include <stdio.h>
/**
 * main - Entry point
 * made 2 loops and 2 if statements
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num1 = '0';
	int num2 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);

				if ((num2 != '9') || (num1 != '8'))
				{
					putchar(44);
					putchar(32);
				}
			}

			num2++;
		}

		num2 = '0';
		num1++;
	}
	putchar('\n');

	return (0);
}
