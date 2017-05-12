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
	int num3 = '0';

	while (num1 <= '9')
	{
	while (num2 <= '9')
	{
		if (num2 > num1)
		{
			while (num3 <= '9')
			{
				if ((num3 > num2) && (num2 > num1))
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);

					if ((num3 != '9') || (num2 != '8') || (num1 != '7'))
					{
						putchar(44);
						putchar(32);
					}
				}
				num3++;
			}
		}
		num3 = '0';
		num2++;
	}
	num2 = '0';
	num1++;
	}
	putchar('\n');

	return (0);
}
