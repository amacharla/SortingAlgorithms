
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *result;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (haystack[i + j] == '\0')
				result = (haystack + i);
		}
	}
	return (result);
}
