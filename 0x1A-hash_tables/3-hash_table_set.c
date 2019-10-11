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
	int index, node;
	hash_node_t *new = NULL, *tmp = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		node = search_collision(ht, (char *)key, (char *)value, index);
		if (node == 1)
			return (1);
	}

	new = create_node(key, value);
	if (new == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}

	tmp = ht->array[index];
	ht->array[index] = new;
	new->next = tmp;

	return (1);
}

/**
 * create_node - function that creates a node
 * @key: key of the node of the hash table
 * @value: value of the node of the hash table
 * @key: key of the node of the hash table
 * Return: the created new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t) * 1);
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (new->key == NULL)
		return (NULL);

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		return (NULL);
	}

	new->next = NULL;

	return (new);
}

/**
 * search_collision - function that cheks if there is a collission
 * @ht: hash table
 * @key: key of the node of the hash table
 * @value: value of the node of the hash table
 * @index: index of the hash
 * Return: 1 on success and 0 otherwise
 */
int search_collision(hash_table_t *ht, char *key, char *value, int index)
{
	hash_node_t *tmp = NULL;

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				exit(1);

			return (1);
		}
		tmp = tmp->next;
	}

	return (0);
}
