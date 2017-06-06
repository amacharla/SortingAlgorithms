#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a
 *  newly allocated space in memory,
 *  which contains a copy of the string given as a
 *  parameter. We create our own buffer!
 * @str: char pointer to string litreal
 * Return: pointer to newly allocated space in memory of the duplicate string.
 */
char *_strdup(char *str)
{
	char *a;
	int i, j;
	/* length of str */
	for (i = 0; str[i]; i++)
		;
	/*allocating memory for a*/
	a = malloc(i * sizeof(char));

	/*checks if memory is allocated*/
	if (a == 0)
		return(0);

	/*coping string*/
	for (j = 0; j < i; j++)
		a[j] = str[j];
	return (a);
}
