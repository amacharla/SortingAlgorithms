#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *Main - Entry point
 *lastn - to get the last digit of n
 *if else statement to print based on creteria
 *Return: with 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastn = n % 10;

	if (lastn > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	else if (lastn == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);

	return (0);
}
