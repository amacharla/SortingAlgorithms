#include <stdio.h>
/**
 * Main - Entry point
 * Printing a to z backwords
 * Return 0 - (Success)
**/
int main(void)
{
	int num1 = '0';
	int num2 = '1';
	int num3 = '2';
	
	while (num1 <= '7')
	{	
		while (num2 <= '8')
		{	
			while (num3 <= '9')
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);

				if ((num3 != '9') || (num2 != '8') || (num1 != '7'))
				{
					putchar(32);
					putchar(44);
				}
				num3 = num2 + '1';
				num3++;
			}
			num2 = num1 + '1';
			num2++;
		}
		num1++;
	}

	putchar('\n');
	return (0);
}
