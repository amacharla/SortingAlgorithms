#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to print thats in the current directory
 * @letters: is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t readcount, writecount;
	char *buffer;

	if (filename == NULL)
		return (0);

	/*open @filename in readonly*/
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	/*make space to store content of file*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*store @letter amount of bytes in @buffer from opened @file*/
	readcount = read(file, buffer, letters);
	if (readcount <= 0) /*number of bytes stored in @buffer*/
	{
		free(buffer);
		close(file);
		return (0);
	}
	close(file); /*must close opened file*/

	/*write to standard out from @buffer @readcount amout of bytes*/
	writecount = write(STDOUT_FILENO, buffer, readcount);
	if (writecount == -1)/*number of bytes printed*/
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (writecount);
}
