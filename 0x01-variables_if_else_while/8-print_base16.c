#include <stdio.h>
/**
 * main - Entry point
 * init char and using while loop to go through the alphabet
 * Return: Always 0 (Success)
*/
int main(void)
{
	int hex = 48;

	while (hex <= 57)
	{
		putchar(hex);
		hex++;
	}

	hex = 97;
	while (hex <= 102)
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');

	return (0);
}
