#include <stdio.h>
void reverse_array(char *a, int n)
{
	int i;
	char c, b;

	n--; /*so i dont get the null character*/
	for (i = 0; i < n; n--, i++)
	{/*incrementing i while decrementing n*/
		b = a[i];
		c = a[n];
		a[n] = b;
		a[i] = c;

	}

}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0;
	int carry = 0;
	int i = 0;
	int max1, max2;

	for (max1 = 0; n1[max1]; max1++)
		;
	for (max2 = 0; n2[max2]; max2++)
		;

	reverse_array(n1, max1);
	reverse_array(n2, max2);

	while (i <= size_r)
	{
		putchar(n1[i]);
		putchar(n2[i]);
		putchar(r[i]);
		sum = (n1[i] + n2[i]) + carry;
		r[i] = (sum % 10) + '0';
		carry = (sum / 10);
		i++;
	}	
	
	return (0);
}
