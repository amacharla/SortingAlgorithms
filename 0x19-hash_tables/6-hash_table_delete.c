#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next_bucket;
	unsigned int i;

	/* if no hash table exist */
	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++) /* free all indexs */
	{	/* if collison exist or hash node exist */
		for(; ht->array[i]; ht->array[i] = next_bucket)
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
