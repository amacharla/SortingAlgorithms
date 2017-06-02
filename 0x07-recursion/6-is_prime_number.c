/**
 * is_prime_number - test if prime number or not
 * @n: int thats being tested
 * Return: 1 if prime and 0 composite
 */
int is_prime_number(int n)
{
	if (n < 0)
		n *= -1;
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	if (n == 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	return (1);
}
