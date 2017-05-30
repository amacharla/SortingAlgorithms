/**
  * _memcpy - copies memory area
  * @dest: wher memory area is being copied to
  * @src: memory thats being copied
  * @n: number of bytes to fill
  * Return: pointer dest of type char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i <  n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
