#include <stdio.h>
/**
 * palindromeCheck - checks if 1 is equal to last
 * @s: is a pointer to char string
 * @length: length of last string
 * Return: 5 if equal and 0 if not
 */
int palindromeCheck(char *s, int length)
{
	if (*s == '\0')
		return (5);
	if (s[0] == s[length])
		return (palindromeCheck(s + 1, length));

	printf("*s is %c |", *s);
	putchar('\t');
	printf("| s[%d] is %c\n", length, *(s + length));

	return (0);
}
/**
 * is_palindrome - counts the length
 * @s: pointer to string
 * Return: 1 if plandrom and 0 if isnt
 */
int is_palindrome(char *s)
{
	int length;

	if (*s + 1 == '\0')
		return;
	if (*s == '\0')
		return (0);

	length = ((is_palindrome(s + 1) + 1) - 1);
	/*return (palindromeCheck(s, length));*/
	return (length);
}
