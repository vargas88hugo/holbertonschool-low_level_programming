#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	h_table = malloc(sizeof(hash_table_t) * 1);
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}

	return (h_table);
}
