#include <stdio.h> 
/**
 *main - entry point
 *prints 1-100
 *replaces multiples of 3 -Fuzz 5 -Buzz 3&5 -FizzBuzz
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ",i);
	}
	printf("\n");
	return (0);
}
