/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: string thats being searched
  * @accept: string thats being matched
  * Return: the address of the last element of the matched char
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *catch = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				catch = (s + i);
				break;
			}
		}
		if (accept[j] == s[i])
			break;
	}
	return (catch);
}
