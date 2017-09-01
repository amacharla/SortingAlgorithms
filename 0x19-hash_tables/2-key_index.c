#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: (string) key
 * @size: size of array
 * Return: Index of where the key goes in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
