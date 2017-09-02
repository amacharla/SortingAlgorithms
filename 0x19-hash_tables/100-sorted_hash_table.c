#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned int i = 0;

	if (size)
	{
		/* make hash table */
		new_table = malloc(sizeof(hash_table_t));
		if (new_table == NULL)
			return (NULL);

		new_table->size = size; /*set size of hashtable*/
		/*alloc memory for slots to hold pointer in array*/
		new_table->array = malloc(sizeof(hash_node_t) * size);
		if (new_table->array == NULL)
		{
			free(new_table);
			return (NULL);
		}
		/* initilize slots with NULL so i know if its empty or not */
		for (i = 0; i < size; i++)
			new_table->array[i] = NULL;
	}
	return (new_table);
}
#include "hash_tables.h"
/**
 * hash_djb2 - hash function that takes key and converts to hash
 * @str: (string) key
 * Return: hash derived from key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
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

	/* arguments checks */
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
#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: structure that holds Hash array and size of hash array
 * @key: string(key)
 * Return: value associated with key or NULL if no key exists
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *bucket;

	if (ht == NULL || ht->array == NULL || ht->size == 0
			|| key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size); /* get keys index */

	bucket = ht->array[index]; /* go to index of where key is located */

	for (; bucket; bucket = bucket->next) /* look for key in bucket */
		if (strcmp(bucket->key, key) == 0)
			return (bucket->value);
	return (NULL);
}
#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: structure that holds Hash array and size of hash array
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *bucket;
	unsigned int i, node_exists = 0;

	if (ht == NULL || ht->size == 0)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		for (; bucket; bucket = bucket->next)
		{
			printf(node_exists ? ", " : "");
			printf("'%s': '%s'", bucket->key, bucket->value);
			node_exists = 1;
		}
	}
	printf("}\n");
}
#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: structure that holds Hash array and size of hash array
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next_bucket;
	unsigned int i;

	/* if no hash table exist */
	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++) /* free all indexs */
	{	/* if collison exist or hash node exist */
		for (; ht->array[i]; ht->array[i] = next_bucket)
		{
			next_bucket = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
		if (ht->array[i] == NULL) /* empty index */
			free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
