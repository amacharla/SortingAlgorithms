#include <stdio.h>
/**
 * main - Entry point
 * init char and using while loop to go through the alphabet
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num = 48;

	putchar(num);
	while (num < 57)
	{
		putchar(44);
		putchar(32);
		num++;
		putchar(num);

	}
	putchar('\n');

	return (0);
}
