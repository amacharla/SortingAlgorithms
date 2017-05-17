#include <stdio.h>
/**
 * main - Fibonacci numbers for the first 50 number
 * uses putchar and printf function
 * uses a and b as placeholders for the 2 previous numbers
 * Return: 0 success
 */
int main(void)
{
	int i;
	unsigned long num; /* number */ 
	unsigned long p0 = 0; /* first previous number */
	unsigned long p1 = 1; /* second previous number */

	for (i = 0; i <= 50; i++)
	{
		if (i <= 1)
			num = i;
		else
		{
			num = p0 + p1;
			p0 = p1;
			p1 = num;
		}
		printf("%li, ", num);
	}
	putchar('\n');
	return (0);
}
