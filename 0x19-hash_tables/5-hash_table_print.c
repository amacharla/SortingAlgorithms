#include "hash_tables.h"

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
			printf(node_exists ? ", ": "");
			printf("'%s': '%s'", bucket->key, bucket->value);
			node_exists = 1;
		}
	}
	printf("}\n");
}
