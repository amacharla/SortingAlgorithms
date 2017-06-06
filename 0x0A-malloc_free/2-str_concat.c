#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	
	for (i = 0; s2[i]; i++)
		;
	i++;
	s1 = realloc(s1, i * sizeof(char));

	for (j = ; s1[j]; j++)


}
