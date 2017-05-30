
char *_strchr(char *s, char c)
{
	int h;
	int i = 0;
	char *result = 0;

	for (h = 0; s[h]; h++)
		;
	while (i <= h)
	{
		if (s[i] == c)
		{
			result = (s + i);
			break;
		}
		i++;
	}
	return (result);
}
