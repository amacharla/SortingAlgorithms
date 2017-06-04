/**
 * _strstr - function that locates the substring
 * @haystack: string thats being searched
 * @needle: string to look for
 * Andrew B has helped me understand this problem.
 * Return: address of the begenning of the string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
