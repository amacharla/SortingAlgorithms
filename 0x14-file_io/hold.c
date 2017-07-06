
	{
		check = close(fdC), check2 = close(fdP);
		if (check == -1 || check2 == -1)
		{
			fd = check == -1 ? fdC : fdP;
			dprintf(STDERR_FILENO, " Error: Can't close fd %d\n", fd), exit(100);
		}
	
	{
		check = close(fdC), check2 = close(fdP);
		if (check == -1 || check2 == -1)
		{
			fd = check == -1 ? fdC : fdP;
			dprintf(STDERR_FILENO, " Error: Can't close fd %d\n", fdC), exit(100);
		}
