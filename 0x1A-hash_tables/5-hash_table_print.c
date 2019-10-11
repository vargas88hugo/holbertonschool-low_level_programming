#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *tmp = NULL;
	char *k, *v;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			k = ht->array[i]->key;
			v = ht->array[i]->value;

			if (j == 0)
				printf("'%s': '%s'", k, v);
			else
				printf(", '%s': '%s'", k, v);
			j = 1;
			tmp = ht->array[i]->next;
			while (tmp)
			{
				k = tmp->key;
				v = tmp->value;
				printf(", '%s': '%s'", k, v);
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
