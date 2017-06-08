#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to take from s2
 * Return: Null if malloc fails else return concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k;
	/*IF NULL treat as empty sting*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/**get size*/
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	concat = malloc((i + 1 + n) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		concat[k] = s1[k];
	for (j = 0; j < n; j++, k++)
		concat[k] = s2[j];
	concat[k] = '\0';

	return (concat);
}
