/**
 * rot13 - encode in rot13
 * @s: pointer to char array
 * Return: char array s.
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
			s[i] = s[i] + 13;
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] = s[i] - 13;
		else
			s[i] = s[i];
	}
	return (s);
}
