#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list
 * @h: single linked list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
