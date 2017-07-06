#include "holberton.h"

int main(argc, **argv)
{
	int result, fdCopied, fdPasted;
	
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	errorCheck = cp(av[1], av[2]);

	switch(errorCheck) {
		case 98 :
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		case 99 :
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		case 100 :
			dprintf(STDERR_FILENO, " Error: Can't close fd %d\n", fdCopied);
			exit(100);
		default:
			return (0);
	}
}

int cp(char *copy, char *paste)
{
	int fdC, fdP, check;

	fdC = open(copy, O_RDONLY);
	fdP = open(paste, O_CREAT | O_TRUNC | O_WRONLY, 0667);
	if (fdC == -1 || fdP == -1)
		return (98);

	size = _strlen(copy
		
	if (copy)
		check = write(fdP, fdC, _strlen(copy));
	if (check == -1)
	{
		check = close(copy);
		if (check == -1)
			return (100);
		return (99);
	}



}
