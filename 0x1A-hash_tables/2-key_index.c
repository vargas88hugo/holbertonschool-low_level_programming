#include "hash_tables.h"

/**
 * key_index - function that gives a index key
 * @key: key of the hash table
 * @size: size of the array of the hash table
 * Return: the key hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return ((unsigned long int)(index % size));
}
