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
