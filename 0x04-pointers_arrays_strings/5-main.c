#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "Holberton";
    char t[11] = "HolbertonA";
    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    rev_string(t);
    printf("%s\n", t);
    return (0);
}
