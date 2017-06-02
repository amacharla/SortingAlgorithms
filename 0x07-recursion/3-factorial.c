/**
 * factorial - returns factorial of n
 * @n: factorial
 * Return: -1 if n < 0 | 0 if n = 0 | factorial if n > 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
