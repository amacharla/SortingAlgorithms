#include <stdio.h>
/**
 * main - Entry point
 * init char and using while loop to go through the alphabet
 * Return: Always 0 (Success)
*/
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	putchar('\n');

	return (0);
}
