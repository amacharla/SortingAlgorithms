#include <stdio.h>
/**
 * main - Entry point
 * init char and using while loop to go through the alphabet
 * Return: Always 0 (Success)
*/
int main(void)
{
	char az = 'a';
	char AZ = 'A';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	while (AZ <= 'Z')
	{
		putchar(AZ);
		AZ++;
	}
	putchar('\n');

	return (0);
}
