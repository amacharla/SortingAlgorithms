#include "monty.h"

int main(int ac, char **av)
{
<<<<<<< HEAD
	FILE FD;
	char *buffer = NULL;
	int check = 0;
	unsigned int linecount = 0;
	size_t buffersize = 0;
	ssize_t glcount = 0;
	stack_t *head = NULL;

	if (ac != 2)
		myexit(1);
	FD = fopen(av[1], r);
	if (FD == NULL)
		myexit(1);
	while (glcount != -1 && check > 0)
	{
		linecount++;
		glcount = getline(&buffer, &buffersize, FD);
		check = run_opcode(&head, buffer);
	}
	if (glcount == -1 && check == 0)
		myexit(3);
	if (check < 0)
		myexit(check);

	exit(EXIT_SUCCESS);
	on_exit(dlist_destroy());
	on_exit(free(buffer)), on_exit(close(FD));
=======
	char *m_file = fopen(av[1], r);
	if (ac != 2 || m_file == NULL)
	{
		myexit(1);
	}
	while(check != -1)
	{
		linecount++;
		check = getline(buf, len, m_file);
		check = run_opcode(stack, buf);
	}
	while(check)
>>>>>>> 462a9dca3bc65fcfb8b815a91fcafce3fff22285
}
