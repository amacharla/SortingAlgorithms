#include <stdio.h>
/**
 * main - Entry point
 * init char and using while loop to go through the alphabet
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++
		if (num != '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
