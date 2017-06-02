/**
 * _strlen_recursion - returns length of string
 * @s: string
 * it goes all the way to null then returns 0 then adds +1
 * down till it reaches the begenning again.
 * its counting from the end to front
 * Return: int of length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
