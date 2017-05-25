/**
 * _strcmp - compares two strings
 * @s1: pointer string type char
 * @s2: pointer string type char
 * Return: 15 if s1 > s2, -15 vice versa, 0 if same
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	if (s1[i] == s2[i])
		i++;
	else	
		diff = s1[i] - s2[i];

	return (diff);
}
