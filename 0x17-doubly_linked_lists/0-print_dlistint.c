#include "lists.h"

/**
 * print_dlistint - Function that prints a linked list
 * @h: Header of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = NULL;
	size_t i;

	if (h == NULL)
		return (0);

	temp = (dlistint_t *)h;

	for (i = 0; temp; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (i);
}
