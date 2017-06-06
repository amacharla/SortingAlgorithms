#include <stdio.h>

void print_diagonal(int n)
{
	int i, h;

	if (n > 0)
	{
		for (h = 0; h < n; h++)
		{
			for (i = 0; i < h; i++)
				putchar(' ');
			putchar(92);
			putchar(10);
		}
	}
	else
		putchar(10);
}

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
