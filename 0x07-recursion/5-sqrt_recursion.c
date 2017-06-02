/**
 * calcSq - finds the square root
 * @x: number thats being multiplied by itself
 * @n: expected result
 * Return: the squareroot of n.
 */
int calcSq(int x, int n)
{
	if (x * x == n)
		return (x);
	return (calcSq(x + 1, n));
}

/**
 * _sqrt_recursion - tests for naturl numbers and calc squareroot
 * @n: squareroot of int thats being caculated
 * Return: square root if natural number else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (calcSq(1, n));
	return (-1);
}
