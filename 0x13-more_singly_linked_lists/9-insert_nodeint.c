#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a position
 * @head: Beginning of the list
 * @idx: Index when insert a new node
 * @n: Number to be insert
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = NULL;
	listint_t *temp = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL && idx == 0)
		return (new);

	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (*head);
	}

	temp = (*head);

	for (i = 1; i < idx; i++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (*head);
}
