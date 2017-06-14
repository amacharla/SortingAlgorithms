/**
 * print_name - prints a name
 * @name: string litreal
 * @f: function pointer to void function with args of char *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);

}
