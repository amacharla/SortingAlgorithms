/**
 * palindromeCheck - checks if 1 is equal to last
 * @s: char array pointing to the begenning of string
 * @e: char array pointing to the end of the string
 * Return: 1 if equal and 0 if not
 */
int palindromeCheck(char *s, char *e)
{
	if (*s == '\0')
		return (1);
	if (s[0] == e[0])
		return (palindromeCheck(s + 1, e - 1));
	return (0);
}
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
/**
 * is_palindrome - counts the length
 * @s: pointer to string
 * Return: 1 if plandrom and 0 if isnt
 */
int is_palindrome(char *s)
{
	int length;
	char *e;

	if (*s == '\0')
		return (1);

	length = (_strlen_recursion(s));
	e = (s + length) - 1;
	return (palindromeCheck(s, e));
}
