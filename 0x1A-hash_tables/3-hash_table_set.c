#include "hash_tables.h"

/**
 * hash_table_set - functions that adds elements to the hash table
 * @ht: hash table
 * @key: key of the node of the hash table
 * @value: value of the node of the hash table
 * Return: 1 if it succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (NULL);

	index = key_index(key, ht->size);

	new = create_node(key, value);

	if (ht->array[index] == NULL)
	{
		new->next = NULL;
		return (1);
	}
}

/**
 * create_node - function that creates a node
 * @key: key of the node of the hash table
 * @value: value of the node of the hash table
 * Return: the created new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t) * 1);
	if (new == NULL)
		return NULL;

	new->key = strdup(key);
	if (new->key == NULL)
		return (NULL);

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new-key);
		return (NULL);
	}

	return (new);
}
