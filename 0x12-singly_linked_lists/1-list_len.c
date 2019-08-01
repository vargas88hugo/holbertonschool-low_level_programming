#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * @h: struct of the linked list
 * Return: the number of elementos of the list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
