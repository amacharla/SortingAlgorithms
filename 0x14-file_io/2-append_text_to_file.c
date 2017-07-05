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
 * append_text_to_file - append a text at the end of a file
 * @filename: name of file to append
 * @text_content: content thats being append to file
 * Return: 1 succesful or -1 unsuccessful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, check;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
		check = write(file, text_content, _strlen(text_content));
	if (check == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
