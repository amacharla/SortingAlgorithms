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
