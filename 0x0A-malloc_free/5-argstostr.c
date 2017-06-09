#include <stdlib.h>
/**
  *argstostr - concatenates all the arguments of your program.
  *@ac: argument count
  *@av: arguments
  *Return: char ptr string or NULL if malloc fails or ac or av is 0
  */
char *argstostr(int ac, char **av)
{
	char *string;
	int i, j;
	int k = 0;/*index through string char pointer*/
	int s = 0;/*count all the characters in arguments*/

	if (ac == 0 || av == NULL)
		return (NULL);

	/*count all the chars in arguments*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, s++)
			;
		s++;
	}

	string = malloc(s * sizeof(char));
	if (string == NULL)
		return (NULL);

	/*add all charcters from args into char ptr array*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			string[k] = av[i][j];
		string[k] = '\n';
		k++;
	}
	string[k] = '\0';
	return (string);
}
