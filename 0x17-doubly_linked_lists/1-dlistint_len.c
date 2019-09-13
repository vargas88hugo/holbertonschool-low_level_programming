#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements of a linked list
 * @h: Head of the linked list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = NULL;
	size_t i;

	if (h == NULL)
		return (0);

	temp = (dlistint_t *)h;

	for (i = 0; temp; i++)
		temp = temp->next;

	return (i);
}
