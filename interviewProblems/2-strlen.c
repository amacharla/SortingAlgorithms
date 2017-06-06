#include <stdio.h>

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
