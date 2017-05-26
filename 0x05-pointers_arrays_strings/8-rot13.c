

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i] >= 'A' && s[i] <= 'Z'))
				s[i] = s[i] + 13;
	}
	return (s);
}
