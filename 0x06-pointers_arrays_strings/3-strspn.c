/**
  * _strspn - gets the length of a prefix substring
  * @s: pointer char array thats being searched
  * @accept: characters to look for
  * Return: number of bytes of first found char
  */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int h = 0;

	for (h = 0; s[h]; h++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[h] == accept[i])
				break;/**increment h**/
		}
		if (!(accept[i]))
			break;/** break out of second loop**/
	}
	return (h);
}
