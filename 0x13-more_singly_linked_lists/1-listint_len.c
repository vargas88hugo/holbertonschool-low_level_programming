#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * @h: head of the linked list
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
