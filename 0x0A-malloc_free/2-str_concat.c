#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string litreal
 * @s2: string litreal
 * Return: concat (s1 + s2) | Null if failed memory allocation
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *concat;

	if (s2 == NULL)
		return (s1);
	/* i = size of s2*/
	for (i = 0; s2[i]; i++)
		;
	/* j = size of s1*/
	for (j = 0; s1[j]; j++)
		;
	i += j + 1; /*s2 size + null character + s1 size*/

	/* expand space of s1 to make space for s2 */
	concat = malloc(i * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* adds s1 then s2 to concat*/
	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);


}
