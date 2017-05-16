#include <stdio.h>
/**
 * Main - Entry point
 * Printing a to z backwords
 * Return 0 - (Success)
**/
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
