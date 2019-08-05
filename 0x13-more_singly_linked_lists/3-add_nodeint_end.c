#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of the list
 * @head: beginning of the list
 * @n: number of the struct
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *last = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	last = (*head);

	if ((*head) == NULL)
	{
		(*head) = new;
	}
	else
	{
		while (last->next)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
