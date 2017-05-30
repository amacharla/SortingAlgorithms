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

	while (s[h])
	{
		while(accept[i])
		{
			if (s[h] == accept[i])
				i++;
			h++;
		}
		
	}
	return (h+1);
}
