#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: structure that holds Hash array and size of hash array
 * @key: (string) key
 * @value: value associated with key
 * Return: 0 if failed else 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *bucket, *node;
	char *dkey, *dvalue;

	if (key == NULL || ht == NULL || ht->size == 0 || ht->array == NULL
			|| strlen(key) == 0 || value == NULL)
		return (0);

	dkey = strdup(key); /*deal with const key*/
	dvalue = strdup(value); /*deal with const value*/
	node = malloc(sizeof(hash_node_t)); /*make new node*/

	if (dkey == NULL || dvalue == NULL || node == NULL) /*malloc checks*/
		return (0);

	index = key_index((const unsigned char *) key, ht->size); /*get Index*/

	bucket = ht->array[index];
	/*look for other keys in bucket for similar key.*/
	for (; bucket; bucket = bucket->next)
		if (strcmp(bucket->key, key) == 0) /*same key found*/
		{
			free(node), free(dkey); /*just updating value*/
			free(bucket->value);
			bucket->value = dvalue;
			break;
		}
	if (bucket == NULL) /* if no collison then make new node at head */
	{
		node->key = dkey;
		node->value = dvalue;
		node->next = ht->array[index]; /*NULL or ptr to other hashnode*/
		ht->array[index] = node;
	}

	return (1);
}
