#include <stdio.h>

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

int is_palindrome(char *s)
{
	int length; 
	
	if (*s + 1 = '\0')
		return;
	if (*s == '\0')
		return (0);
	
	length = ((is_palindrome(s + 1) + 1) - 1);
	/*return (palindromeCheck(s, length));*/
	return (length);
}
