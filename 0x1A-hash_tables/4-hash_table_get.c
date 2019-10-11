#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key of the node of the hash table
 * Return: the value associeated with a key or NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(key, ht->array[index]->key) == 0)
		return (ht->array[index]->value);

	tmp = ht->array[index]->next;

	while (tmp)
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);

	return (NULL);
}
