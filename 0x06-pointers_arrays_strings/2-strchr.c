/**
  * _strchr - function that locates a character in a string
  * @s: string being looked at
  * @c: character thats being matched
  * Return: result - first occurrance of matched char
  */
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
