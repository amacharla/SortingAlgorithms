/**
 * _pow_recursion - returns value of x ^ y.
 * @x: int value
 * @y: power to be raised
 * Return: x * y-1 till y == 0 -> y = 1 and unwindes
 * thus causing x to multiply itself
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
