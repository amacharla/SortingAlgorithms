#include "holberton.h"
/**
 * _strlen - gets string length
 * @text: character pointer to string
 * Return: size of string
 */
size_t _strlen(char *text)
{
	size_t i;

	for (i = 0; text[i]; i++)
		;
	return (i);
}
/**
 * create_file - creates a file addes content to it
 * @filename: name of the file (first argument)
 * @text_content: content of file (second argument)
 * Return: 1 if successful else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, check;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	check = write(file, text_content, _strlen(text_content));
	if (check == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
