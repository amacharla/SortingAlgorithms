
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *catch;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
			{
				catch = _strstr((haystack + i), needle);
					
			}
		}
	}
	return (catch);
}
