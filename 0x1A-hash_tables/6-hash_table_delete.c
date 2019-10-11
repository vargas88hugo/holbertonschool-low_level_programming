#include "hash_tables.h"

/**
 * hash_table_delete - functions that frees the hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp1, *tmp2;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp1 = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			while (tmp1)
			{
				tmp2 = tmp1->next;
				free(tmp1->key);
				free(tmp1->value);
				free(tmp1);
				tmp1 = tmp2;
			}
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
