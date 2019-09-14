#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that adds a node at a given position
 * @h: Head of the linked list
 * @idx: Index of the list where the new node should be added
 * @n: Number of the variable of the linked list
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	tmp = *h;
	for (i = 0; tmp->next; i++)
		tmp = tmp->next;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (idx == i + 1)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	else if (idx > i)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	for (; i != idx - 1; i--)
		tmp = tmp->prev;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
