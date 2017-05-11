#include <stdio.h>
/**
 * main - Entry point
 * init char and using while loop to go through the alphabet
 * Return: Always 0 (Success)
*/
int main(void)
{
	char za = 'z';

	while (za >= 'a')
	{
		putchar(za);
		za--;
	}
	putchar('\n');

	return (0);
}
