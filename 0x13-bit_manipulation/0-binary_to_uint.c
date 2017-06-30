#include "holberton.h"

unsigned int binaryString_to_int(const char *b)
{
	unsigned int i, number = 0;

	if (b == '\0')
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0')
			number += (number * 10) + 0;
		else if (b[i] == '1')
			number += (number * 10) + 1;
		else
			return (0);
	}
	return (number);
}

unsigned int conversion_anybase(unsigned int number, unsigned int base)
{
	unsigned int i, result = number % 10;

	for (i = base; (number /= 10) != 0; i *= base)
		result += number * i;
	return (result);
}
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
       number = binaryString_to_int(b);
	if (number == 0)
		return (0);
	return (conversion_anybase(number, 10));


}
