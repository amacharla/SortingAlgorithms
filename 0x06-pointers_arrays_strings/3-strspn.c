/**
  * _strspn - gets the length of a prefix substring
  * @s: pointer char array thats being searched
  * @accept: characters to look for
  * Return: number of bytes of first found char
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, h;
	int result;

	for (h = 0; accept[h]; h++)
	{
		for (i = 0; s[i]; i++)
		{
			if (accept[h] == s[i])
			{
				result = i + 1;
				break;
			}
		}
		if (s[i] == accept[h])
			break;
	}
	return (result);
}
