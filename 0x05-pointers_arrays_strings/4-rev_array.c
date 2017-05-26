/**
 * reverse_array - reverses the content of array
 * @a: array thats being reversed
 * @n: size of array
 * Used the swapping method
 */
void reverse_array(int *a, int n)
{
	int i, c, b;

	n--;
	for (i = 0; i < n; n--, i++)
	{
		b = a[i];
		c = a[n];
		a[n] = b;
		a[i] = c;

	}

}
