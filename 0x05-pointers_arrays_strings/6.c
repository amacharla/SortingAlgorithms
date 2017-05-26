/**
  * cap_string - capitalize all the words of a string
  * @s: pointer to char array
  * Return: s
  */
char *cap_string(char *s)
{
	int i;

	if ((s[0] >= 'a' && s[0] <= 'z') && (s[0] >= 'A' && s[0] <= 'z'))
		s[0] = s[0] - 32;
	for (i = 0; s[i]; i++)
	{
		switch (s[i - 1])
		{
			case ' ': case ',': case ';': case '.': case '!': case '?': case '"':
			case '(': case ')': case '{': case '}': case '\t': case '\n':

				if ((s[i] >= 'a' && s[i] <= 'z') && (s[i] >= 'A' && s[i] <= 'z'))
					s[i] = s[i] - 32;
		}
	}
	return (s);
}
